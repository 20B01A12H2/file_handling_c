/*
names are :  rama, sita
ages are : 25, 28
letters are : A, B
*/

#include <stdio.h>
#include <string.h>

struct mystruct {
    char name[20];
    int age;
    char letter;
};

int main(){
    struct mystruct s1;
    struct mystruct s2;

    strcpy(s1.name, "rama");
    s1.age = 25;
    s1.letter = 'A';

    strcpy(s2.name, "sita");
    s2.age = 28;
    s2.letter = 'B';

    printf("names are :  %s, %s\n", s1.name, s2.name);
    printf("ages are : %d, %d\n", s1.age, s2.age);
    printf("letters are : %c, %c\n", s1.letter, s2.letter);

    return 0;
}