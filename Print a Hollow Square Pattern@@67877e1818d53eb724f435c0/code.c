#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        if(i==0 || i==n-1){
            for(int j=0; j<n; j++){
                printf("*");
            }
            printf("\n");    
        }else{
            printf("*");
            for(int k=0; k<n-2; k++){
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
    }
    return 0;
}