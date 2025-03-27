#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    scanf("%s", &str);

    int len = strlen(str);
    int left = 0;
    int right = len-1;

    char str1[100];
    strcpy(str1, str);

    while(left<=right){
        char temp = str1[left];
        str1[left] = str1[right];
        str1[right] = temp;

        left++;
        right--;
    }

    // if(str1 == str){
    //     printf("Yes");
    // }else{
    //     printf("No");
    // }

    printf("%s", str1);
    printf("%s", str);
    return 0;
}