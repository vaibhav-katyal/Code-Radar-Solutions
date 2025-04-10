#include<string.h>
#include<ctype.h>

void caesarCipher(char *message, int shift, char *encrypted){
    for(int i=0; message[i] != '\0'; i++){
        char ch = message[i];
        char base;
        if(isalpha(ch)){
            if(isupper(ch)){
                base = 'A';
            }else{
                base = 'a';
            }

            encrypted[i] = (ch-base+shift)%26 +base;
        }else{
            encrypted[i] = ch;
        }
    }

    encrypted[strlen(message)] = '\0';
}