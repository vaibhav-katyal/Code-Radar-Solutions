#include<stdio.h>

int main(){
    int n;
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int check = -1;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[i] == arr[j]){
                check = arr[i];
                break;
            }
        }
    }
    printf("%d", check);
    return 0;
}