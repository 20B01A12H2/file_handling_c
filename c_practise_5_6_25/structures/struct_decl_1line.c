/*
names are : rama, sita
ages are : 25, 28
letters are : A, B
*/

#include<stdio.h>

struct mystruct {
    char name[20];
    int age;
    char letter;
};

int main(){
    struct mystruct s1 = {"rama", 25, 'A'};
    struct mystruct s2 = {"sita", 28, 'B'};

    printf("names are : %s, %s\n", s1.name, s2.name);
    printf("ages are : %d, %d\n", s1.age, s2.age);
    printf("letters are : %c, %c\n", s1.letter, s2.letter);

    return 0;
}