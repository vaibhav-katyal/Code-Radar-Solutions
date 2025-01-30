#include <stdio.h>


int main() {
    int n,b;
    scanf("%d %d", &n, &b);

    if(n & (1<<b)){
        b = ~b;
    }

    printf("%d", n);
    return 0;
}