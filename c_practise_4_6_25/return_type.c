#include<stdio.h>

int return_type(int x){
    return 5+x;
}

int main(){
    int res = return_type(10);
    printf("values in res - %d\n", res);
    printf("memory address allocated to res - %zu", &res);

    return 0;
}