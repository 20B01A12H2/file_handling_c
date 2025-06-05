#include <stdio.h>
#include <string.h>

struct myStructure {
    char name[20];
    int age;
    char myLetter;
};

int main(){
    struct myStructure s1;
    
    strcpy(s1.name, "naga likhita");
    s1.age = 25;
    s1.myLetter = 'D';

    printf("name is %s\n", s1.name);
    printf("age is %d\n", s1.age);
    printf("letter is %c\n", s1.myLetter);

    return 0;
    
}