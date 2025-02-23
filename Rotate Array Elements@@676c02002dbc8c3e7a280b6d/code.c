#include<stdio.h>

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
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
    for(int i = 0; i<k; i++){
        for(int j=0; j<n; j++){
            swap(arr[i], arr[n-1]);
        }
    }

    for(int l=0; l<n; l++){
        printf("%d\n", arr[l]);
    }
    return 0;
}