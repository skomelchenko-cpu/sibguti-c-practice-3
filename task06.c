#include <stdio.h>

int main(void){
    char stro[30];
    int width;
    scanf("%s %d", stro, &width);
    printf("%*s\n", width,stro);
    printf("%-*s\n",width + 5,stro);
    return 0;
}
