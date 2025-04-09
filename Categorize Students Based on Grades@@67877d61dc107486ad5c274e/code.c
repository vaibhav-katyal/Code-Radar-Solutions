#include<stdio.h>

struct Student{
    int rollNo;
    char name[60];
    float marks;
    char grade;
};
int main(){
    struct Student stud[50];
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %s %f", &stud[i].rollNo, &stud[i].name, &stud[i].marks);
    }

    for(int i=0; i<n; i++){
        if(stud[i].marks>= 85){
            stud[i].grade = 'A';
        }else if(stud[i].marks>=70 && stud[i].marks<=84.9){
            stud[i].grade = 'B';
        }else{
            stud[i].grade = 'C';
        }
    }

    for(int i=0; i<n; i++){
        printf("Roll Number: %d, Name: %s, Grade: %c\n", stud[i].rollNo, stud[i].name, stud[i].grade);
    }
    return 0;
}