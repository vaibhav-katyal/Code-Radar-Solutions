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
    if(count>0){
        printf("%d", 32-count-1);
    }else if(num == 1){
        printf("%d", 1);
    }else{
        printf("%d", 0);
    }
    return 0;
}