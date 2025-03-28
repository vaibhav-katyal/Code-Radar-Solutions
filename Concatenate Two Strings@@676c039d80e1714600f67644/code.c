#include<stdio.h>
#include<string.h>

void removeNewLine(char *str){
    int len = strlen(str);
    if(len>0 && str[len-1] == '\n'){
        str[len-1] = '\0';
    }
}

int main(){
    char str1[100];
    char str2[100];
    char str_comb[100];
    fgets(str1, sizeof(str1), stdin);
    removeNewLine(str1);
    fgets(str2, sizeof(str2), stdin);
    removeNewLine(str2);

    strcat(str1, str2);
    printf("%s", str1);
    return 0;
}