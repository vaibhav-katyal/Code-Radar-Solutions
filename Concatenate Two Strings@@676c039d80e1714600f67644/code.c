#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    char str2[100];
    char str_comb[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    str_comb = strcat(str1, str2);
    printf("%s", str_comb);
    return 0;
}