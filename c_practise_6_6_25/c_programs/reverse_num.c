#include <stdio.h>

int main(){
    int num;

    printf("enter number - ");
    scanf("%d", &num);   // 123

    int tmp = num, rev = 0;

    while (tmp > 0){
        int rem = tmp % 10;
        rev = (rev * 10) + rem;
        tmp = tmp / 10;
    }
    printf("reverse number of %d -> %d", num, rev);

    return 0;
}