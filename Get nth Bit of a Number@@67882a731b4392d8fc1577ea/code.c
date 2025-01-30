#include <stdio.h>


int main() {
    int n,b;
    scanf("%d %d", &n, &b);
    
    if(n & (1<<b)){
        printf("%d", 1);
    }
    else{
        printf("%d", 0);
    }
    return 0;
}