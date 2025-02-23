#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", arr[i]);
    }

    int c_even = 0;
    int c_odd = 0;

    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0){
            c_even+= 1;
        }else{
            c_odd+= 1;
        }
    }

    printf("%d %d", c_even, c_odd);
    return 0;
}