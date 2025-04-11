#include<stdio.h>
#include<string.h>
struct Subscription{
    char name[100];
    char subs[50];
    int price;
};

int main(){
    struct Subscription s[50];
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%s %s %d", &s[i].name, &s[i].subs, &s[i].price);
    }

    float basic_total = 0;
    float st_total = 0;
    float pre_total = 0;

    int basic_users = 0;
    int st_users = 0;
    int pre_users = 0;

    for(int i=0; i<n; i++){
        if(strcmp(s[i].subs, "Basic") == 0){
            basic_total+= s[i].price;
            basic_users++;
        }
        else if(strcmp(s[i].subs, "Premium") == 0){
            pre_total+= s[i].price;
            pre_users++;
        }
        else{
            st_total+= s[i].price;
            st_users++;
        }
    }

    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f", basic_users, basic_total, st_users, st_total, pre_users, pre_total);
    return 0;
}