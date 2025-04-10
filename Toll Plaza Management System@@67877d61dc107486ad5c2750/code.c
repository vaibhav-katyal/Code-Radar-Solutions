#include<stdio.h>
struct Vehicle{
    char vNo[100];
    char vType[50];
    int amnt;
};

int main(){
    struct Vehicle v[50];
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%s %s %d", &v[i].vNo, &v[i].vType, &v[i].amnt);
    }

    float car_total = 0;
    float truck_total = 0;
    float bike_total = 0;

    for(int i=0; i<n; i++){
        if(strcmp(v[i].vType, "Car") == 0){
            car_total+= v[i].amnt;
        }
        else if(strcmp(v[i].vType, "Truck") == 0){
            truck_total+= v[i].amnt;
        }
        else{
            bike_total+= v[i].amnt;
        }
    }

    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f", car_total, truck_total, bike_total);
    return 0;
}