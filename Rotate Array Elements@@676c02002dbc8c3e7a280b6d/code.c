#include<stdio.h>

void reverseArr(int arr[], int l, int r){
    while(l<r){
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}
int main(){
    int n, val;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &val);
        arr[i] = val;
    }

    int k;
    scanf("%d", &k);

    reverseArr(arr, 0, n-k-1);
    reverseArr(arr, n-k, n-1);
    reverseArr(arr, 0, n-1);

    for(int l=0; l<n; l++){
        printf("%d\n", arr[l]);
    }
    return 0;
}