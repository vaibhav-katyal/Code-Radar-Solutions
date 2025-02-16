#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int start = 1;
    int bin;

    for(int i=0; i<n; i++){
        bin = start;
        for(int j=0; j<=i; j++){
            printf("%d ", bin);
            bin = !bin;
        }
        start = !start;
        printf("\n");
    }
    return 0;
}