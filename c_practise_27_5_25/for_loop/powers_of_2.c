/* print the powers of 2 till 512 */

#include <stdio.h>

int main(){
    printf("powers of 2 are: ");
    for (int i = 2; i <= 512; i *= 2){
        printf("%d\n", i);
    }
    return 0;
}