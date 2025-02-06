#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int count = 0;
    while(num>0){
        if(num%2 == 0){
            count += 1;
        }

        num = num/2;
    }

    printf("%d", count);
    return 0;
}