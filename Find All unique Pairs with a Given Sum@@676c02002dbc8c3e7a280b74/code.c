#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int arr_new[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        arr_new[i] = arr[i];
    }

    int target;
    scanf("%d", &target);

    int visited[n];
    for(int i=0; i<n; i++){
        visited[i] = 0;
    }

    int k=0;
    for(int i=0; i<n; i++){
        if(visited[i] == 1) continue;

        int count = 1;
        for(int j=i+1; j<n; j++){
            if(arr[j] == arr[i]){
                count++;
                visited[j] = 1;
            }
        }

        arr_new[k] = arr[i];
        k++;

    }

    for(int i = 0; i<k; i++){
        printf("%d ", arr_new[i]);
    }

    // for(int i=0; i<k; i++){
    //     for(int j=i+1; j<k; j++){
    //         if(arr_new[i]+arr_new[j] == target){
    //             printf("%d %d\n", arr_new[i], arr_new[j]);
    //         }
    //     }
    // }
    return 0;
}