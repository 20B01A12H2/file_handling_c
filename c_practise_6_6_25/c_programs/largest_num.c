#include<stdio.h>

int main(){
    int num1, num2;

    printf("numbers are - ");
    scanf("%d, %d", &num1, &num2);

    if (num1 > num2){
        printf("%d is grater than %d", num1, num2);
    }else if (num1 == num2){
        printf("both are equal");
    }else{
        printf("%d is greater than %d", num2, num1);
    }
}