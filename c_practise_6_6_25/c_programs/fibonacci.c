#include<stdio.h>

int main(){
    int a = 0, b = 1, c;
    int cnt, i = 0;

    printf("enter number - ");
    scanf("%d", &cnt);

    while (i <= cnt){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }

    return 0;
}