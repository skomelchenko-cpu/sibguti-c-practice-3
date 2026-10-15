#include <stdio.h>
#include <string.h>
#define AAA "LinuxDistro"

int main(void){
    const char RDAT[]= "2026";
    printf("DISTRO: %s\n", AAA);
    printf("RDATE: %s\n" , RDAT);
    printf("STRLEN: %zu\n", strlen(AAA));
    printf("STRLEN: %zu\n", sizeof(AAA));
    return 0;
}
