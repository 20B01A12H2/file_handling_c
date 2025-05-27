/* reverse numbers using while loop */

#include <stdio.h>

int main(){
    int num = 12345;
    // scanf("enter number: %d", num);
    printf("number is: %d\n", num);

    int tmp = num;
    int rev = 0;
    while (tmp > 0){
        rev = (rev * 10) + (tmp % 10);
        tmp /= 10;
    }

    printf("reversed number of %d is %d\n", num, rev);

    return 0;
}