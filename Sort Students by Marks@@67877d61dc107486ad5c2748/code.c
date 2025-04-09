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

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]<arr[j+1]){
                struct Student temp = stud[j];
                stud[j] = stud[j+1];
                stud[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n", stud[i].rollNo, stud[i].name, stud[i].marks);
    }
    return 0;
}