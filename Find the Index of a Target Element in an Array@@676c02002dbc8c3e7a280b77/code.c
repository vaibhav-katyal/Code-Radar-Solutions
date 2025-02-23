#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    int flag = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == k){
            printf("%d", i);
            flag = 1;
            break;
        }
    }

    if(!flag){
        printf("%d", -1);
    }

    return 0;
}