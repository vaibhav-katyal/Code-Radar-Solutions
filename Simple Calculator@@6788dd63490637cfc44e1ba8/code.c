#include <stdio.h>

int main() {
    int a,b;
    char op;

    scanf("%d %d %c", &a, &b, &op);
    int div = a/b;
    if(op == '+'){
        printf("%d", a+b);
    }else if(op == '-'){
        printf("%d", a-b);
    }else if(op == '*'){
        printf("%d", a*b);
    }else{
        if(b != 0){
            printf("%d",a/b);
        }   
    }
    return 0;
}