#include <stdio.h>

int main(){
    char str[1024] = {};
    printf("Input : ");
    scanf("%s",str);
    char *p = str;
    printf("Output : ");
    while(*p != '\0'){
        *p++;
    }
    while(*p != str[0]){
        *p--;
        printf("%c",*p);
    }
}
