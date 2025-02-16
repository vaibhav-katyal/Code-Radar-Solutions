#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;  // Not Prime
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  // Not Prime
        }
    }
    return 1;  // Prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is Not a Prime number.\n", num);
    }

    return 0;
}
