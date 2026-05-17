#include <windows.h>
#include <shlwapi.h>
int WINAPI wWinMain(HINSTANCE hInst, HINSTANCE hPrev, LPWSTR lpCmd, int nShow)
{
    wchar_t exePath[MAX_PATH];
    GetModuleFileNameW(NULL, exePath, MAX_PATH);
    PathRemoveFileSpecW(exePath);
    SetCurrentDirectoryW(exePath);
    STARTUPINFOW si = { sizeof(si) };
    PROCESS_INFORMATION pi;
    if (!CreateProcessW(
        L"..\\portal2.exe", NULL, NULL, NULL, FALSE,
        CREATE_NO_WINDOW, NULL, NULL, &si, &pi))
    {
        MessageBoxW(NULL, L"Failed to launch Portal 2: Confinement!\nThis shouldn't even be possible. How did you manage this?\nPlease review the instructions again on the Github repository.\nIf that still doesn't work, verify your game files.\nIf that doesn't work, pray.\n\nhttps://github.com/blackletum/Confinement-Fix", L"Error", MB_ICONERROR);
        return 1;
    }
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return 0;
}