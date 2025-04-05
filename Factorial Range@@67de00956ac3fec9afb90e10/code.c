int fact(int n){
    if(n<=1) return 1;

    return n*fact(n-1);
}

void factorialRange(int start, int end){
    if(start>end || start<0 || end<0){
        printf("Invalid range");
    }else{
        for(int i=start; i<=end; i++){
            printf("%d\n", fact(i));
        }
    }
}