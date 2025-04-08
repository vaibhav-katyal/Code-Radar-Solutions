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

    int find;
    scanf("%d", &find);

    for(int i=0; i<n; i++){
        if(stud[i].rollNo == find){
            printf("Roll Number: %d, Name: %s, Marks: %f", stud[i].rollNo, stud[i].name, stud[i].marks);
        }
    }
    
    return 0;
}