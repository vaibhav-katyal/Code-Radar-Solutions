#include <stdio.h>

int main() {
    // AND of number with -number gives us the only lowest set bit at its position.

    int num;
    scanf("%d", &num);
    int mask = num & -num;
    int position = 0;

    while(mask != 1){
        mask = mask >> 1;     // if the bit is not 1, right shift
        position += 1;
    }

    printf("%d", position);
    return 0;
}