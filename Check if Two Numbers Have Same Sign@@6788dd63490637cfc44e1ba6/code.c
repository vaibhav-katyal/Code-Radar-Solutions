#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    (a>0 && b>0)?printf("Positive"):printf("Negative");
    return 0;
}