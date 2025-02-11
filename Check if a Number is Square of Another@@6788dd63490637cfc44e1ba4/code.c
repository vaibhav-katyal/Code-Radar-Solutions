#include <stdio.h>
#include <math.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int result = pow(b,2);

    if(a == result)?printf("Yes"):printf("No");
    return 0;
}