#include<stdio.h>

int main(){

    int month;
    scanf("%d", &month);

    switch(month){
        case 1:
        printf("%d", 31);
        case 2:
        printf("%d", 28);
        case 3:
        printf("%d", 31);
        case 4:
        printf("%d", 30);
        case 5:
        printf("%d", 31);
        case 6:
        printf("%d", 30);
        case 7:
        printf("%d", 31);
        case 8:
        printf("%d", 31);
        case 9:
        printf("%d", 30);
        case 10:
        printf("%d", 31);
        case 11:
        printf("%d", 30);
        case 12:
        printf("%d", 31);

        default:
        printf("Invalid month");
    }
    return 0;
}