#include <stdio.h>

long addTwoNumbers(long *, long *);

int main(){
    long fn = 10, sn = 16, s;

    s = addTwoNumbers(&fn, &sn);

    printf("sum - %d", s);

    return 0;
}

long addTwoNumbers(long *n1, long *n2) {
    long s;
    s = *n1 + *n2;
    return s;
}