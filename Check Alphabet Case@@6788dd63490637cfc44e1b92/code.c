#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);
    
    // char lower = ch.tolower;
    if(isupper(ch)){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}