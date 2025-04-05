#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int visited[n];
    for(int i=0; i<n; i++){
        visited[i] = 0;
    }

    int max_num = 0;
    int max = 0;
    for(int i=0; i<n; i++){
        if(visited[i] == 0){
            continue;
        }

        int count = 0;
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count > max){
            max = count;
            max_num = arr[i];
        }
    }

    printf("%d", max_num);
    return 0;
}