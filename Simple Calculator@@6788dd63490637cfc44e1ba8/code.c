#include <stdio.h>

int main() {
    int a,b;
    char op;

    scanf("%d %d %c", &a, &b, &op);

    if(op == '+'){
        printf("%d", (int)a+b);
    }else if(op == '-'){
        printf("%d", (int)a-b);
    }else if(op == '*'){
        printf("%d", (int)a*b);
    }else{
        printf("%d", (int)a/b);
    }
    return 0;
}