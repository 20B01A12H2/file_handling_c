#include<stdio.h>

int myFunction(int x, int y);

int main(){
    printf("output - %d", myFunction(5, 3));

    return 0;
}

int myFunction(int x, int y){
    return x + y;
}