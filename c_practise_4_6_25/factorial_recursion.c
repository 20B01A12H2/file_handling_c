#include <stdio.h>

int fact_recur(int num);    // function declaration

int main(){
    int res = fact_recur(5);
    printf("factorial is %d", res);

    return 0;
}

int fact_recur(int num){     // function definition
    if (num == 0){
        return 1;
    }
    else{                    // also works with if (num == 0){} while(num >= 1){}
        return num * fact_recur(num - 1);
    }
}