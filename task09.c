#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"");
    wchar_t ima[30];
    wprintf(L" ");
    wscanf(L"%ls",ima);
    wprintf(L"Агент %ls авторизован в системе\n", ima);
    return 0;
}
