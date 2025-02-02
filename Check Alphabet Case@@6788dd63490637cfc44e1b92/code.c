#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);
    
    char lower = ch.tolower;
    if(ch == lower){
        printf("Lowercase");
    }else{
        printf("Uppercase");
    }
    return 0;
}