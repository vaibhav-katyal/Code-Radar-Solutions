#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int min = abs(arr[0]-arr[1]);
    int p1 = arr[0];
    int p2 = arr[1];
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(abs(arr[i] - arr[j])<min){
                min = abs(arr[i] - arr[j]);
                p1 = arr[i];
                p2 = arr[j];
            }
        }
    }

    if(p1<p2){
        printf("%d %d", p1, p2);
    }
    else{
        printf("%d %d", p2, p1);
    }
    return 0;
}