#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    int printed[n][n] = {0};

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == target && printed[i][j] == 0){
                printf("%d %d\n", arr[i], arr[j]);
                printed[i][j] = 1;
            }
        }
    }
    return 0;
}