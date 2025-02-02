#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);
    int asci_ch = ch;
    
    if(asci_ch>=65 && asci_ch<=90){
        printf("Uppercase");
    }else if(asci_ch>=97 && asci_ch<=122){
        printf("Lowercase");
    }else{
        printf("Not an alphabet")
    }
    return 0;
}