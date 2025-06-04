#include<stdio.h>

int local_var(){
    int x = 25;

    return x;
}

int main(){
    
    printf("%d", local_var());

    return 0;
}