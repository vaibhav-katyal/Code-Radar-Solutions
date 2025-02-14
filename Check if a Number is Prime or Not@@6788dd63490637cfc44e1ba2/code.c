#include <stdio.h>
#include <math.h>

void checkPrime(int n) {
    if (n <= 1) {
        printf("Not Prime");
        return; // Add return to avoid unnecessary iterations
    }

    for (int i = 2; i <= (int)sqrt(n); i++) { // Explicitly cast to int
        if (n % i == 0) {
            printf("Not Prime");
            return;
        }
    }
    printf("Prime");
}

int main() {
    int num;
    scanf("%d", &num);
    checkPrime(num);
    return 0;
}
