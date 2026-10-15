#include <stdio.h>
#include <string.h>

int main(void){
    char NAME[40];
    scanf("%s",NAME);
    printf("\"%s\"\n", NAME);
    printf("\"%20s\"\n", NAME);
    printf("\"%-20s\"\n",NAME);
    printf("\"%*s\"\n", (int)strlen(NAME)+5, NAME);//  либ ("\"%*s %*s\"\n",5,"",(int)strlen(NAME)+5, NAME)
    return 0;
}
