#include<stdio.h>

int checkPalindrome(int n){
    int num = n;

    int new_num = 0;
    while(num>=0){
        int rem = num%10;
        new_num += rem;
        num = num/10;
    }

    if(new_num == n){
        return 1;
    }else{
        return 0;
    }

    return -1;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i=0; i<n; i++){
        int res = checkPalindrome(arr[i]);

        if(res == 1) count++;
    }

    printf("%d", count);
    return 0;
}