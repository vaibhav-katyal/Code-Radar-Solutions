#include<stdio.h>

int main(){
    int n;
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", arr[i]);
    }
    int check = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == check){
            printf("%d", check);
            break;
        }else{
            check = arr[i];
        }
    }
    return 0;
}