#include<stdio.h>
struct MovieTicket{
    char movie[100];
    char type[50];
    int price;
};

int main(){
    struct MovieTicket m[50];
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%s %s %d", &m[i].movie, &m[i].type, &m[i].price);
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