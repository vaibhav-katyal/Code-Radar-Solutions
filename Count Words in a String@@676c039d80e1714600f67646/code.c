#include<stdio.h>
#include<ctype.h>

int CountWords(char *str){
    int inWord = 0;
    int count = 0;

    while(*str){
        if(isspace(*str)){
            inWord = 0;
        }else if(!inWord){
            count++;
            inWord = 1;
        }

        str++;
    }

    return count;
}

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);

    printf("%d", CountWords(str));
    return 0;
}