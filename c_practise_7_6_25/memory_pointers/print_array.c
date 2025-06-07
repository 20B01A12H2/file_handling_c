/* since array itself is a pointer */
#include <stdio.h>

int main(){
    int arr[5] = {10, 22, 30, 40, 50};

    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("arr[%d] - %d\n", i, *(arr+i));
    }

    return 0;
}


/* using pointer variable */
// #include <stdio.h>

// int main(){
//     int arr[5] = {10, 22, 30, 40, 50};
//     int *ptr = arr;

//     for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
//         printf("%p\n", *(ptr+i));
//         printf("arr[%d] - %d\n", i, *(arr+i));
//     }

//     return 0;
// }