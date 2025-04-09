#include<stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle rec[50];
    int n;
    for(int i=0; i<n; i++){
        scanf("%d %d", &rec[i].length, &rec[i].breadth);
    }

    for(int i=0; i<n; i++){
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i+1, rec[i].length*rec[i].breadth, 2*(rec[i].length*rec[i].breadth));
    }
    return 0;
}