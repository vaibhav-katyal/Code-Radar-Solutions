#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int final = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            final = 0;
            break;
        }else{
            final = 1;
        }
    }
    
    (final == 1)?printf("Sorted"):printf("Not Sorted");
    return 0;
}