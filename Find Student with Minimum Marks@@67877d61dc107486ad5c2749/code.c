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

    for(int i=0; i<n; i++){
        scanf("%d %s %f", &stud[i].rollNo, &stud[i].name, &stud[i].marks);
    }
    float min_marks = stud[0].marks;
    int k = 0;
    for(int i=0; i<n; i++){
        if(stud[i].marks<min_marks){
            min_marks = stud[i].marks;
            k = i;
        }
    }

    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %f", stud[k].rollNo, stud[k].name, stud[k].marks);
    return 0;
}