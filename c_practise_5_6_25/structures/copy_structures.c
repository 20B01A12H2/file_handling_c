/*
names are : naga likhita, naga likhita
ages are : 25, 25
letters are : A, A
*/

#include <stdio.h>

struct mystruct {
    char name[20];
    int age;
    char letter;
};

int main(){
    struct mystruct s1 = {"naga likhita", 25, 'A'};
    struct mystruct s2;
    s2 = s1;

    printf("names are : %s, %s\n", s1.name, s2.name);
    printf("ages are : %d, %d\n", s1.age, s2.age);
    printf("letters are : %c, %c\n", s1.letter, s2.letter);
}