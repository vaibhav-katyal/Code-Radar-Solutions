#include<stdio.h>

void reverseArray(int *arr, int n){
    int low = 0;
    int high = n-1;

    while(low<=high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        low++;
        high--;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr_copy[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        arr_copy[i] = arr[i];
    }

    reverseArray(arr_copy, n);

    int flag = 1;
    for(int i=0; i<n; i++){
        if(arr[i] != arr_copy[i]){
            flag = 0;
            break;
        }
    }

    if(flag == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}