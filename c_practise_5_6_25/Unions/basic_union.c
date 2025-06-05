#include<stdio.h>
#include <string.h>

union myunion {
    int age;
    char name[36];
    char letter;
};

int main(){
    union myunion u1;

    printf("size of u1 - %d\n", sizeof(u1));
    printf("size of int %d\n", sizeof(u1.age));
    printf("size of name %d\n", sizeof(u1.name));
    printf("size of letter %d\n", sizeof(u1.letter));

    u1.age = 25;
    u1.letter = 'G';
    strcpy(u1.name, "naga likhita");

    printf("age is - %d\n", u1.age);
    printf("letter is - %c\n", u1.letter);
    printf("name is - %s\n", u1.name);

    return 0;
}