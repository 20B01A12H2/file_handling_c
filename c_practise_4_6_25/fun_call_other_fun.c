#include<stdio.h>

int calculate_sum();
void compare();

int main(){
    compare(75, 20);
    printf("execution completed");

    return 0;
}

int calculate_sum(int x, int y){
    int s = x + y;
    return s;
}

void compare(int x, int y){
    if (calculate_sum(x, y) > 100){
        printf("sum %d is greater than 100\n", calculate_sum(x, y));
    }
    else{
        printf("sum %d is less than 100\n", calculate_sum(x, y));
    }
}