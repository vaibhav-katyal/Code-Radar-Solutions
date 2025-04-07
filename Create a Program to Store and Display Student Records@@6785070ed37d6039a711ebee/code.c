#include<stdio.h>
#include<string.h>

struct Student{
    int rollNo;
    char name[100];
    float marks;
};

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        struct Student s;
        scanf("%d %s %f", &s.rollNo, &s.name, &s.marks);

        printf("Roll Number: %d, Name: %s, Marks: %f", s.rollNo, s.name, s.marks);
    }
    return 0;
}