#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("sample.txt", "w");
    fprintf(fptr, "some text\n");
    fclose(fptr);

    return 0;
}