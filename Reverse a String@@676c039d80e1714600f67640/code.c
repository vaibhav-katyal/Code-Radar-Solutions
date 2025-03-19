#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    scanf("%s", &str);

    // for(int i=strlen(str)-1; i>=0; i--){
    //     printf("%c", str[i]);
    // }

    int len = strlen(str);
    int left = 0;
    int right = len-1;

    while(left<right){
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("%s", str);
    return 0;
}