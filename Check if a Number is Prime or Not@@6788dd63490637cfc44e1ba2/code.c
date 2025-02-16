#include<stdio.h>
#include<math.h>

void checkPrime(int n){
    if(n<=1){
        printf("Not Prime");
        return;
    }
    int limit = sqrt(n);
    for(int i=2; i<=limit; i++){
        if(n%i == 0){
            printf("Not Prime");
            return;
        }
    }
    printf("Prime");
}
int main(){
    int num;
    scanf("%d", &num);

    checkPrime(num);
    return 0;
}