/*

#include <stdio.h>

void calculate_sum(){
    int x = 5;
    int y = 10;
    int s = x + y;

    printf("sum of %d and %d is - %d", x, y, s);

}

int main(){
    calculate_sum();

    return 0;
}

*/

/* passing parameters */

#include <stdio.h>

void calculate_sum(int x, int y){
    int s = x + y;
    printf("sum of %d and %d is - %d", x, y, s);
}

int main(){
    calculate_sum(20, 30);
    calculate_sum(5, 10);
    calculate_sum(15, 25);

    return 0;
}