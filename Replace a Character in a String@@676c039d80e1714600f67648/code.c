#include<stdio.h>

int main(){
    char str[100];
    scanf("%s", str);

    char a;
    char b;

    scanf("%c", &a);
    scanf("%c", &b);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == a){
            str[i] = b;
        }
    }

    printf("%s", str);
    return 0;
}