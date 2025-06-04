#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("sample.txt", "a");
    fprintf(fptr, "appending data\n");

    fclose(fptr);

    return 0;
}