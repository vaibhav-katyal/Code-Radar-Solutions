void caesarCipher(char *message, int shift, char *encrypted){
    for(int i=0; message[i]!='\0'; i++){
        encrypted[i] = message[i]+shift;
    }

    encrypted[strlen(message)] = '\0';
}