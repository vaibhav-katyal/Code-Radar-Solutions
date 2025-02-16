#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    // normal pyramid
    for(int i=0; i<n; i++){
        for(int k=0; k<n-i-1; k++){
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    // inverted pyramid

    for(int i=n-1; i>0; i--){
        for(int k=0; k<n-i-1; k++){
            printf(" ");
        }
        for(int j=0; j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}