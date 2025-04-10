#include<stdio.h>
#include<string.h>
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

    float st_total = 0;
    float pre_total = 0;
    float vip_total = 0;

    for(int i=0; i<n; i++){
        if(strcmp(m[i].type, "Standard") == 0){
            st_total+= m[i].price;
        }
        else if(strcmp(m[i].type, "Premium") == 0){
            pre_total+= m[i].price;
        }
        else{
            vip_total+= m[i].price;
        }
    }

    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f", st_total, pre_total, vip_total);
    return 0;
}