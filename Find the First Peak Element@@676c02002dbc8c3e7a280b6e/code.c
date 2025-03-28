#include<stdio.h>

int Peakelement(int *arr, int n){
    if(n == 1) return arr[0];
    if(arr[0] > arr[1]) return arr[0];
    if(arr[n-1] > arr[n-1]) return arr[n-1];

    int low = 1;
    int high = n-2;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] > arr[mid-1] && arr[mid]>arr[mid+1]){
            return arr[mid];
        }
        else if((mid%2 !=0 && arr[mid]>arr[mid-1]) || (mid%2 = 0 && arr[mid]>arr[mid+1])){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d\n", &arr[i]);
    }

    printf("%d", Peakelement(arr, n));
    return 0;
}