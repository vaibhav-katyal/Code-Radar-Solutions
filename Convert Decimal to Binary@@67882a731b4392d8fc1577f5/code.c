#include <stdio.h>

int main() {
    int num, i;
    int arr[32];

    scanf("%d", &num);

    while(num>0){
        arr[i] = num%2;
        num = num/2;
        i++;
    }

    for(int j=i; j>=0; j--){
        printf("%d", arr[j]);
    }

    return 0;
}