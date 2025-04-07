#include<stdio.h>

struct Student{
    int rollNo;
    char name[50];
    float marks;
};

int main(){
    struct Student stud[50];
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %s %f", &stud[i].rollNo, &stud[i].name, &stud[i].marks);
    }

    for(int i=0; i<n; i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", stud[i].rollNo, stud[i].name, stud[i].marks);
    }
    return 0;
}