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

    float thresh;
    scanf("%d", &thresh);

    int count = 0;
    for(int i=0; i<n; i++){
        if(stud[i].marks>thresh){
            count++;
        }
    }

    printf("Count of students scoring above %.2f: %d", thresh, count);
    return 0;
}