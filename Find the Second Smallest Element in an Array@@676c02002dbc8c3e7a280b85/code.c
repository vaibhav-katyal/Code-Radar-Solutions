#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int arr_new[n];
    int k = 0;
    
    int visited[n];
    for(int i=0; i<n; i++){
        visited[i] = 0;
    }

    for(int i=0; i<n; i++){
        if(visited[i] == 1) continue;

        int count = 1;
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = 1;
            }
        }

        if(count == 1){
            arr_new[k] = arr[i];
            k++;
        }
    }

    for(int i=k-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr_new[j]>arr_new[j+1]){
                int temp = arr_new[j];
                arr_new[j] = arr_new[j+1];
                arr_new[j+1] = temp;
            }
        }
    }

    if(k>=2){
        printf("%d", arr_new[1]);
    }else{
        printf("%d", -1);
    }
    
    return 0;
}