#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);
    int asci_ch = ch;
    
    if(asci_ch>=65 && asci_ch<=97){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}