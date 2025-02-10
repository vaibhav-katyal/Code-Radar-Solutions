#include <stdio.h>

int main() {
    int num, i;
    int arr[32];

    scanf("%d", &num);

    if(num ==0){
        printf("%d", 0);
    }

    while(num>0){
        arr[i] = num%2;
        num = num/2;
        i++;
    }

    for(int j=i-1; j>=0; j--){
        printf("%d", arr[j]);
    }

    return 0;
}