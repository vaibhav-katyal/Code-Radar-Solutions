#include<stdio.h>

int checkPrime(int n){
    if(n<=1) return 0;

    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int size;
    scanf("%d", &size);
    int arr[size];

    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i=0; i<size; i++){
        int res = checkPrime(arr[i]);

        if(res == 1){
            count++;
        }
    }

    printf("%d", count);
    return 0;
}