#include<stdio.h>

int x = 5;

int global_var(){
    printf("%d", x);
}

int main(){
    global_var();
    printf("\n");
    x = 10;
    printf("%d", x);

    return 0;
}