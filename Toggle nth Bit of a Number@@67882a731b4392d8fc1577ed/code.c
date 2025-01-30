#include <stdio.h>


int main() {
    
    int n,b;
    scanf("%d %d", &n, &b);

    n = n^(1<<b);   // xor flips the bit, (if bit is 0 xor with 1 becomes --> 1)
                     // if bit is 1 xor with 1 becomes --> 0

    printf("%d", n);
    return 0;
}