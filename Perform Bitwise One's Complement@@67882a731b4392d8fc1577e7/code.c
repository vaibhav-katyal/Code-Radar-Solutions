#include <stdio.h>

int main() {
    int a;
    scanf("%d", a);
    int rev = ~a;
    printf("%d", rev);
    return 0;
}