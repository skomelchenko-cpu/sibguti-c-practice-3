#include <stdio.h>
#include <string.h>

int main(void){
    char world1[15];
    char world2[15];
    scanf("%s %s", world1, world2);//tk posle probela on zapisivaet v massiv//
    printf("%s-%s\n",world1, world2);
    printf("TOTAL_len: %zu\n", strlen(world1)+strlen(world2));
    return 0;
}
