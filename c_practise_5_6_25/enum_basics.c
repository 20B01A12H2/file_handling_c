/*
LOW by default it is 0, then MEDIUM -> 1, HIGH -> 2
LOW = 10, THEN BY DEFAULT MEDIUM -> 11, HIGH -> 12
*/

#include <stdio.h>

enum level {
    LOW = 10,
    MEDIUM,       
    HIGH
};

int main(){
    enum level enumvar = MEDIUM;

    printf("%d", enumvar);

    return 0;
}