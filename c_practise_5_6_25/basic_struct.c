#include <stdio.h>

// create a structure called myStructure
struct myStructure {
    int age;
    char myLetter;
};

int main(){
    // create a structure variable of myStructure called s1
    struct myStructure s1;

    // assign values to members of s1
    s1.age = 25;
    s1.myLetter = 'C';

    printf("age is %d\n", s1.age);
    printf("char is %c\n", s1.myLetter);

    return 0;

}