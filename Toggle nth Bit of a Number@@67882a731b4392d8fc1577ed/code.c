#include <stdio.h>


int main() {
    
    int n,b;
    scanf("%d %d", &n, &b);

    n = n& ~(1<<b);

    printf("%d", n);
    return 0;
}