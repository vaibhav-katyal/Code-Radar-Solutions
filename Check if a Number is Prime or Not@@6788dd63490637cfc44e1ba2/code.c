#include <stdio.h>

int main() {
    int n;
   
    scanf("%d", &n);

    if (n <= 1) 
        printf(" Not Prime");
    else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) 
        printf("Not Prime");
    else 
        printf("Prime");

    return 0;
}