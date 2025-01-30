#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int msb_check = 1 << 31;      // creates 10000000000000000000000000000000

    if(num & msb_check){
        printf("Set");
    }
    else{
        printf("Not Set");
    }

    return 0;
}