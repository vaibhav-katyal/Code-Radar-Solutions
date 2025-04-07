#include<stdio.h>

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

        for(int j=0; j<n; j++){
            if(arr[j] == x+1){
                count++;
                x = x+1;
            }
            
        }
        if(count > max_count){
            max_count = count;
        }
    }

    printf("%d", max_count);
    return 0;
}