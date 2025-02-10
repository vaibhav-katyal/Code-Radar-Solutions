#include <stdio.h>

int main() {
    int num, bit;
    scanf("%d %d", &num, &bit);

    int temp = 1 << bit;        // 1 ko left shift kra ke utni bit pe legye aue fir vahan se or krvayege toh 1 toh 1 hi rkheag 0 bhi 1 hojayega

    int result = num | temp;

    printf("%d", result);
    return 0;
}