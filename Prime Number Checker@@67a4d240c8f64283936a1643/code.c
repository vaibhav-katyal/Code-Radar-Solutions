#include<stdio.h>

int isPrime(int n){
    if(n<=1){
        return 0;
    }

    for(int i=0; i<=n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }

    return 0;
}