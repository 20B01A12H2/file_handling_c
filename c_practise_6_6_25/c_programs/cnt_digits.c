#include <stdio.h>

int main(){
    int num, dgt = 0;

    printf("enter number - ");
    scanf("%d", &num);

    int tmp = num;
    while (tmp > 0){
        tmp = tmp / 10;
        dgt = dgt + 1;
    }
    printf("number of digits in %d -> %d digits", num, dgt);

    return 0;

}