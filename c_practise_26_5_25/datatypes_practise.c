// #include <stdio.h>

// int main(){
//     int len = 20;
//     int breadth = 10;
//     int area = len * breadth;

//     printf("%d", area);
//     return 0;
// }


// /* ASCII values A - 65, a - 97*/
// #include <stdio.h>

// int main(){
//     int a = 65;
//     int b = 66;
//     int c = 67;

//     printf("A - %c\nB - %c\nC - %c", a, b, c);
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     char mychar = 'Hello';
    
//     printf("%c", mychar);   // only stores last character
//     printf("%s", mychar);   // stores all characters
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     printf("%lu\n", sizeof(int));
//     printf("%lu\n", sizeof(float));
//     printf("%lu\n", sizeof(double));
//     printf("%lu\n", sizeof(char));
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int myAge = 25;
//     int votingAge = 18;

//     if (myAge >= votingAge){
//         printf("%d years (> 18) old people are allowed to vote", myAge);
//     }else{
//         printf("%d years (< 18) old people are not allowed to vote", myAge);
//     }
//     return 0;
// }

// /* using ternary operator 
// variable = (condition) ? expressionTrue : expressionFalse; */

// #include <stdio.h>

// int main(){
//     int time = 18;
//     (time < 20) ? printf("Good day.") : printf("Good Evening.");
//     return 0;
// }


// /* using switch case */

// #include <stdio.h>

// int main(){
//     int day = 4;

// switch (day){
//     case 1:
//         printf("Monday");
//         break;
//     case 2:
//         printf("Tuesday");
//         break;
//     case 3:
//         printf("Wednesday");
//         break;
//     case 4:
//         printf("Thursday");
//         break;
//     case 5:
//         printf("Friday");
//         break;
//     case 6:
//         printf("Saturday");
//         break;
//     case 7:
//         printf("Sunday");
//         break;
// }
// return 0;
// }


#include <stdio.h>

int main(){
    int day = 4;
    switch (day){
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("Looking forward to weekend!");
            break;
    }
    return 0;
}