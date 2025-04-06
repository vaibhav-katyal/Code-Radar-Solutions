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

    int max_count = 0;
    int max_no = 0;
    for(int i=0; i<n; i++){
        if(visited[i] == 1) continue;

        int count = 1;
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = 1;
            }
        }
        if(count>max_count){
            max_count = count;
            max_no = arr[i];
        }
    }

    printf("%d", max_no);
    return 0;
}