#include<stdio.h>
struct Employee{
    int empID;
    char name[50];
    int salary;
    float bonus;
};

int main(){
    struct Employee emp[50];
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %s %d", &emp[i].empID, &emp[i].name, &emp[i].salary);
    }

    for(int i=0; i<n; i++){
        if(emp[i].salary < 50000){
            emp[i].bonus = 0.1*emp[i].salary;
        }else{
            emp[i].bonus = 0.05*emp[i].salary;
        }
    }

    for(int i=0; i<n; i++){
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", emp[i].empID, emp[i].name, emp[i].bonus);
    }
    return 0;
}