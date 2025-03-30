int isPrime(int n){
    if(n<=1) return 0;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

void printPrimesInRange(int a, int b){
    for(int i=a; i<=b; i++){
        int a = isPrime(i);
        if(a == 1){
            printf("%d ", i);
        }
    }
}