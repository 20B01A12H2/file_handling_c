// #include <stdio.h>

// void array_param(int myArray[], int size){  // int* myArray
//     printf("address of pointer myArray - %zu\n", sizeof(myArray));
//     printf("%zu\n", &myArray);
//     printf("value in myArray - %zu\n", myArray);
// }

// int main(){
//     int myNums[] = {10, 20, 30, 40, 50};
//     array_param(myNums, 5);
//     printf("address of myNums Array - %zu\n", &myNums);
//     printf("number of bytes allocated - %d\n", sizeof(myNums));
//     printf("value - %d\n", myNums[0]);

//     return 0;
// }

#include <stdio.h>

void array_param(int myArray[], int size){  // int* myArray
    printf("address of pointer myArray - %zu\n", sizeof(myArray));
    printf("%zu\n", &myArray);
    printf("value in myArray - %zu\n", myArray);
}

int main(){
    int myNums[] = {10, 20, 30, 40, 50};
    array_param(myNums, 5);
    printf("address of myNums Array - %zu\n", &myNums);
    printf("number of bytes allocated - %d\n", sizeof(myNums));
    printf("value - %d\n", myNums[0]);

    int s = 0;
    for (int i=0; i<sizeof(myNums)/sizeof(myNums[0]); i++){
        s = s + myNums[i];
    }
    printf("sum of elements - %d\n", s);

    return 0;
}