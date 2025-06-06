#include<stdio.h>

int main(){
    int num, res = 1;

    printf("enter number - ");
    scanf("%d", &num);

    for (int i=num; i>=1; i--){
        res = res * i;
    }
    printf("factorial is - %d", res);

    return 0;
}