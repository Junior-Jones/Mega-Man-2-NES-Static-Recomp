#include "mm2_windows_log.h"

#include <windows.h>
#include <algorithm>
#include <cstdio>
#include <cwchar>
#include <functional>
#include <iterator>
#include <memory>
#include <string>
#include <vector>

namespace {
constexpr size_t kLogCount = 5;
std::unique_ptr<FILE, decltype(&std::fclose)> session_log(nullptr, &std::fclose);

void prune_logs(const std::wstring &directory, const std::wstring &current) {
    WIN32_FIND_DATAW entry{};
    HANDLE find = FindFirstFileW(
        (directory + L"\\mm2-????????-??????-???-????????.log").c_str(), &entry);
    if (find == INVALID_HANDLE_VALUE) return;
    std::vector<std::wstring> old_logs;
    do {
        if ((entry.dwFileAttributes & (FILE_ATTRIBUTE_DIRECTORY | FILE_ATTRIBUTE_REPARSE_POINT)) == 0 &&
            current != entry.cFileName)
            old_logs.emplace_back(entry.cFileName);
    } while (FindNextFileW(find, &entry));
    FindClose(find);
    std::sort(old_logs.begin(), old_logs.end(), std::greater<>());
    for (size_t index = kLogCount - 1; index < old_logs.size(); ++index)
        DeleteFileW((directory + L"\\" + old_logs[index]).c_str());
}
}

void mm2_windows_log_open(const wchar_t *installation_directory) {
    const std::wstring directory = std::wstring(installation_directory) + L"\\Logs";
    if (!CreateDirectoryW(directory.c_str(), nullptr) && GetLastError() != ERROR_ALREADY_EXISTS)
        return;
    SYSTEMTIME now{};
    GetSystemTime(&now);
    wchar_t name[64]{};
    swprintf_s(name, std::size(name), L"mm2-%04u%02u%02u-%02u%02u%02u-%03u-%08lX.log",
        now.wYear, now.wMonth, now.wDay, now.wHour, now.wMinute, now.wSecond,
        now.wMilliseconds, GetCurrentProcessId());
    session_log.reset(_wfopen((directory + L"\\" + name).c_str(), L"w, ccs=UTF-8"));
    if (session_log) prune_logs(directory, name);
}

void mm2_windows_log_write(const wchar_t *message) {
    if (!session_log) return;
    SYSTEMTIME now{};
    GetSystemTime(&now);
    std::fwprintf(session_log.get(), L"%02u:%02u:%02u UTC  %ls\n",
        now.wHour, now.wMinute, now.wSecond, message);
    std::fflush(session_log.get());
}
