#include<string.h>
#include<ctype.h>

void caesarCipher(char *message, int shift, char *encrypted){
    for(int i=0; message[i] != '\0'; i++){
        char ch = message[i];

        if(isalpha(ch)){
            if(isupper(ch)){
                char base = 'A';
            }else{
                char base = 'a';
            }

            encrypted[i] = (ch-base+shift)%26 +base;
        }else{
            encrypted[i] = ch;
        }
    }

    encrypted[strlen(message)] = '\0';
}