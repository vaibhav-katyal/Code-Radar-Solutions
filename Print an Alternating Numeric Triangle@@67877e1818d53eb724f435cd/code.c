#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int bin = 3&&3;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%d ", bin);
            bin = ~bin;
        }
        printf("\n");
    }
    return 0;
}