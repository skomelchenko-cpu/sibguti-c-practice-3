#include <stdio.h>
#include <string.h>


int main(void){
    char strok[20]="СибГУТИ"; //utf8//
    printf("SIZEOF: %zd\n", sizeof(strok)); //(оператор)ыозращает размер выделеной памяти//
    printf("STRLEN: %zd\n", strlen(strok));//(функция) возращает длину строки без 0//
    printf("FREE_BYTES: %zu\n", sizeof(strok)- strlen(strok) - 1);
    return 0;
}
