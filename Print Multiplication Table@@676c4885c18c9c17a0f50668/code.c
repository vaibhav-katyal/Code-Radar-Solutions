#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", 2, i, 2*i);
    }
    return 0;
}