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
    int count = 0;
    for(int i=0; i<n; i++){
        scanf("%d %s %f", &stud[i].rollNo, &stud[i].name, &stud[i].marks);
        if(stud[i].marks>50){
            count++;
        }
    }

    if(count == n){
        printf("All Passed");
    }else{
        printf("Not All Passed");
    }
    return 0;
}