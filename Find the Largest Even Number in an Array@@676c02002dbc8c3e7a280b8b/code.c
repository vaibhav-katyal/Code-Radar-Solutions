#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int arr_even[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int k=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0){
            arr_even[k] = arr[i];
            k++;
        }
    }

    if(k<=0){
        printf("%d", -1);
    }
    else{
        for(int i=k-1; i>=0; i--){
            for(int j=0; j<i; j++){
                if(arr_even[j]>arr_even[j+1]){
                    int temp = arr_even[j];
                    arr_even[j] = arr_even[j+1];
                    arr_even[j+1] = temp;
                }
            }
        }

        printf("%d", arr_even[k-1]);
    }
    
    return 0;
}