#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    // if you xor a number twice, you get back the original number  a^b^b = a
    // a^b^a = b

    a = a^b;
    b = a^b;
    a = a^b;

    printf("%d %d", a, b);

    return 0;
}