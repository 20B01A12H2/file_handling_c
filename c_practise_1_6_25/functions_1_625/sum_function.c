#include <stdio.h>

int calculate_sum(){
    int x = 5;
    int y = 10;
    int s = x + y;

    printf("sum of %d and %d is - %d", x, y, s);

}

int main(){
    calculate_sum();

    return 0;
}