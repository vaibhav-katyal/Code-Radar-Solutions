#include<stdio.h>
#include<string.h>

struct Student{
    int rollNo;
    char name[50];
    float marks;
};
int main(){
    struct Student stud[50];
    int n;
    scanf("%d", &n);

    float max_marks = 0;
    int max_roll;
    char max_name[50];
    for(int i=0; i<n; i++){
        scanf("%d %s %f", &stud[i].rollNo, &stud[i].name, &stud[i].marks);
        if(stud[i].marks > max_marks){
            max_marks = stud[i].marks;
            max_roll = stud[i].rollNo;
            strcpy(max_name, stud[i].name);
        }
    }

    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f", max_roll, max_name, max_marks);
    return 0;
}