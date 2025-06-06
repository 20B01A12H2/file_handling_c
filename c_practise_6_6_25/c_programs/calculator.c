#include<stdio.h>

int main(){
    int num1, num2;

    printf("numbers are - ");
    scanf("%d, %d", &num1, &num2);
    char sym;
    printf("enter symbol(+, -, *, /, 0 to exit) - ");
    scanf(" %c", &sym);

    switch (sym){
        case '+':
            printf("addition of %d, %d is %d", num1, num2, num1 + num2);
            break;
        case '-':
            printf("subtraction of %d, %d is %d", num1, num2, num1 - num2);
            break;
        case '*':
            printf("multiplication of %d, %d is %d", num1, num2, num1*num2);
            break;
        case '/':
            printf("division of %d, %d is %d", num1, num2, num1/num2);
            break;
        default:
            printf("invalid symbol, try again\n");
            break;
    }

    return 0;
}