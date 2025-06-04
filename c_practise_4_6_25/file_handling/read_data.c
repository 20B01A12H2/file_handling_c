#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("sample.txt", "r");
    
    char myString[100];
    fgets(myString, 200, fptr);
    printf("%s", myString);

    return 0;
}