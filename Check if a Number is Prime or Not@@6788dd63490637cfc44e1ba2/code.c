#include<stdio.h>
#include<maths.h>

void checkPrime(int n){
    if(n<=1){
        printf("Not Prime");
        return;
    }

    for(int i=2; i<=(int)sqrt(n); i++){
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