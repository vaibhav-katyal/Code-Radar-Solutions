#include<stdio.h>

struct Student{
    int rollNo;
    char name[60];
    float marks;
};

int main(){
    struct Student stud[50];
    int n;
    scanf("%d", &n);
    float sum = 0;
    for(int i=0; i<n; i++){
        scanf("%d %s %f", &stud[i].rollNo, &stud[i].name, &stud[i].marks);
        sum += stud[i].marks;
    }

    printf("Total Marks: %.2f", sum);
    printf("Average Marks: %.2f", sum/n);
    return 0;
}