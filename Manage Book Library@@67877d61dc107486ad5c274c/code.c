#include<stdio.h>

struct Book{
    char title[50];
    char author[50];
    float price;
};

int main(){
    struct Book b[50];
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%s %s %f", &b[i].title, &b[i].author, &b[i].price);
    }

    float thresh;
    scanf("%f", &thresh);

    printf("Books above price %.2f:\n", thresh);
    for(int i=0; i<n; i++){
        if(b[i].price>thresh){
            printf("Title: %s, Author: %s, Price: %.2f\n", b[i].title, b[i].author, b[i].price);
        }
    }
    return 0;
}