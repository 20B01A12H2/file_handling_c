#include<stdio.h>

float fahrenheit_celcius(int fahrenheit){
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main(){
    float f_value = 98.0;
    float f_result = fahrenheit_celcius(f_value);

    printf("fahrenheit value - %.2f\n", f_value);
    printf("fahrenheit to celcius - %.2f", f_result);

    return 0;
}