// /* while loop - printing 10 natural numbers */
// #include <stdio.h>

// int main(){
//     int i = 1;
//     while (i <= 10){
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }


/* countdown to happy new year */

#include <stdio.h>

int main(){
    int countdown = 3;

    while (countdown > 0){
        printf("%d\n", countdown);
        countdown--;
    }
    printf("Happy New Year!");
}