#include <stdio.h>

int main() {
    float rad;
    scanf("%f", &rad);
    float area = 3.14*rad*rad;
    printf("Area: %.2f", area);
    return 0;
}