#include<stdio.h>

int main(){
    char str[100];
    scanf("%s", str);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == 'l'){
            str[i] = 'z';
        }
    }

    printf("%s", str);
    return 0;
}