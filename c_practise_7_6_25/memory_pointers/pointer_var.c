#include <stdio.h>

int main(){
    int num = 10, *ptr = &num;

    printf("num value - %d\n", num);
    printf("num address - %p\n", &num);
    printf("pointer value - %p\n", ptr);
    printf("pointer address - %lu\n", &ptr);
    printf("pointer dereferance - %d\n", *ptr);

    return 0;
}