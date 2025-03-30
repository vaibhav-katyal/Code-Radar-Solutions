void caesarCipher(char *message, int shift, char *encrypted){
    for(int i=0; message[i]!='\0'; i++){
        char ch = message[i];
        encrypted[i] = ch+shift;
    }

}