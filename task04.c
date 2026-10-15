#include <stdio.h>
#include <string.h>

int main(void){
    char stro[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";
    printf("%s",stro);
    printf("STRLEN: %zu\n", strlen(stro));
    printf("SIZEOF: %zu\n",sizeof(stro));
    return 0;
}
