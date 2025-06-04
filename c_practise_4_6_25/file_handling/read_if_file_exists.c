/*
this code prints 'file doesn't exist' bcz samplefile.txt is not available
*/

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("samplefile.txt", "r");

    // printf("%s", fptr);   -> gives null if file doesn't exist

    if (fptr != NULL){
        char myString[500];
        while (fgets(myString, 500, fptr)){
            printf("%s", myString);
        }
    }
    else{
        printf("file doesn't exist");
    }

    return 0;
}