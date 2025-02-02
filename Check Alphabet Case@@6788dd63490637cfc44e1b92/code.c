#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);
    int asci_ch = ch;
    
    if(asci_ch>=65 && asci_ch<=90){
        printf("Lowercase");
    }else{
        printf("Uppercase");
    }
    return 0;
}