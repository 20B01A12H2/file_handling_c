#include <stdio.h>

int main(){
    int mynum;
    printf("enter number: ");
    scanf("%d", &mynum);

    int tmp = mynum, rev = 0;
    while (tmp > 0){
        int rem = tmp % 10;
        rev = (rev * 10) + rem;
        tmp = (int)tmp / 10;
    }

    printf("reverse number - %d\n", rev);

    if (mynum == rev){
        printf("%d is palindrome number", mynum);
    }
    else{
        printf("%d is not a palindrome number", mynum);
    }
    return 0;
}