#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", arr[i]);
    }

    for(int i=0; i<n; i++){
        if(i>i+1){
            printf("Not Sorted");
            break;
        }
        else{
            printf("Sorted");
        }
    }
    return 0;
}