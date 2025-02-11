#include <stdio.h>
#include <math.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    // by default pow function will return double
    // we have to convert it to int
    (a == (int)pow(b,2)) ? printf("Yes") : printf("No");
    return 0;
}