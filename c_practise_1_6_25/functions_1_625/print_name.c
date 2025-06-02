#include <stdio.h>

void print_name(char name[]){
    printf("Hello %s\n", name);
}

int main(){
    print_name("Sita");
    print_name("Rama");
    print_name("Lakshmana");

    return 0;
}