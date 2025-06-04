#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("c.txt", "r");
    
    char myString[100];
    fgets(myString, 200, fptr);
    printf("%s", myString);

    fclose(fptr);

    return 0;
}