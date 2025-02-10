#include <stdio.h>

int main() {
    int num, bit;
    scanf("%d %d", &num, &bit);

    int temp = num << bit;

    int result = num | temp;

    printf("%d", result);
    return 0;
}