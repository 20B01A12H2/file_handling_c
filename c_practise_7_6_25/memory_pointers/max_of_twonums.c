#include <stdio.h>

int main(){
    int n1, n2;
    int *ptr1, *ptr2;

    printf("enter numbers - ");
    scanf("%d %d", &n1, &n2);

    ptr1 = &n1;
    ptr2 = &n2;

    if (*ptr1 > *ptr2){
        printf("%d is greater than %d", *ptr1, *ptr2);
    }else{
        printf("%d is greater than %d", *ptr2, *ptr1);
    }

    return 0;
}