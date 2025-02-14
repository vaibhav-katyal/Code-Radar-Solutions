#include<stdio.h>
#include<math.h>

void checkPrime(int n){
    if(n<=1){
        printf("Not Prime");
    }

    for(int i=2; i<sqrt(n); i++){
        if(n%i == 0){
            printf("Not Prime");
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