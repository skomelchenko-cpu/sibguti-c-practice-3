#include <stdio.h>
int main(void){
    char a;
    scanf("%c",&a);
    printf("CODE_DEC: %d\n",a);
    printf("CODE_HEX: %x\n",a);
    printf("CODE_OCT: %o\n",a);
    char big = a - 32;
    char sl = a + 1;
    char pr = a -1;

    printf("UPPER: %c\n",big);
    printf("NEXT: %c\n",sl);
    printf("PREV: %C\n",pr);
    return 0;
}
