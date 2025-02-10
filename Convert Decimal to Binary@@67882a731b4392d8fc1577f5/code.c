#include <stdio.h>

int main() {
    int num;
    int arr[32];

    scanf("%d", &num);

    while(num>0){
        arr[i] = num%2;
        num = num/2;
        i++;
    }

    for(int j=0; j<arr.size(); j++){
        printf("%d", arr[j]);
    }

    return 0;
}