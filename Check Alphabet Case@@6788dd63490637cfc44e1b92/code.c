#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);
    
    // char lower = ch.tolower;
    if(ch.isupper()){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}