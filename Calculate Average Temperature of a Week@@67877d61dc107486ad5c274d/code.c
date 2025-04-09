#include<stdio.h>

struct Day{
    char day[30];
    int temp;
};

int main(){
    struct Day d[50];

    int sum = 0;
    for(int i=0; i<7; i++){
        scanf("%s %d", &d[i].day, &d[i].temp);
        sum += d[i].temp;
    }
    float avg = sum/7;
    printf("Average Temperature: %.2f", avg);
    return 0;
}