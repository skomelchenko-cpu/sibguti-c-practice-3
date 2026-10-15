#include <stdio.h>
#include <wchar.h>  // Для wchar_t и wcslen
#include <locale.h> // Библиотека для локали

int main() {
    setlocale(LC_ALL, "");

    wchar_t a[50];
    wchar_t b[50];
    wchar_t c[50];

    wscanf(L"%ls", a);
    wscanf(L"%ls", b);
    wscanf(L"%ls", c);
    wprintf(L"%-15.15ls |%20.20ls|%.5ls\n", a, b, c);

    return 0;
}
