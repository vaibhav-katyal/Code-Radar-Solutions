#include<stdio.h>

int ls(int *arr, int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            return 1;
        }
        else{
            return 0;
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max_count = 1;
    for(int i=0; i<n; i++){
        int x = arr[i];
        int count = 1;

        while(ls(arr, n, x+1) ==  1){
            count++;
            x = x+1;
        }
        if(count > max_count){
            max_count = count;
        }
    }

    printf("%d", max_count);
    return 0;
}