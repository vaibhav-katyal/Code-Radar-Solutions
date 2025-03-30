void caesarCipher(char *message, int shift, char *encrypted){
    for(int i=0; i<n; i++){
        int final = message[i]+shift;

        encrypted[i] = final;
    }
}