#include<stdio.h>

int main(){
    int num1;
    int num2;

    printf("numbers are - ");
    scanf("%d %d", &num1, &num2);
    int s = num1 + num2;
    printf("sum of %d and %d is %d", num1, num2, s);

    return 0;
}