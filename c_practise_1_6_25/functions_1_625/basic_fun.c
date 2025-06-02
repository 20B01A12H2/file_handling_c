/*
.\basic_fun.c:6:12: warning: 'return' with a value, in function returning void
    6 |     return 0;
      |            ^
.\basic_fun.c:3:6: note: declared here
    3 | void my_fun(){
      |      ^~~~~~
*/
// #include <stdio.h>

// void my_fun(){
//     printf("Hello world");

//     return 0;
// }

// int main(){
//     my_fun();

//     return 0;
// }


/* Hello world */
#include <stdio.h>

void my_fun(){
    printf("Hello world");
}

int main(){
    my_fun();
    my_fun();

    return 0;
}