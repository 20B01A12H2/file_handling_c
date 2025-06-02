#include <stdio.h>

void array_fun(int myarr[], int size){
    // for(int i=0; i<size; i++){
    //     printf("%zu\n", myarr[i]);
    // }
    printf("%zu\n", myarr);
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    array_fun(arr, 5);
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%zu - %d\n", &arr[i], arr[i]);
    }
}