#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    float avg = (a+b+c);
    printf("Average: %.2f", avg/3);
    return 0;
}