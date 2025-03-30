char caesarCipher(char *message, int shift, char *encrypted){
    for(int i=0; message[i]!='\0'; i++){
        int final = message[i]+shift;

        encrypted[i] = final;
    }

    return *encrypted;
}