#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("c.txt", "r");

    char myString[500];
    while (fgets(myString, 500, fptr)){
        printf("%s", myString);
    }
    return 0;
}