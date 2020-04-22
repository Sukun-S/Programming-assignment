#include <stdio.h>

int main()
{
    float celsius, fahrenheit; // float because results can be in decimal

    printf("Enter temperature in Fahrenheit: "); // enter the details
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9; // formula for conversion
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius); // display the value
    return 0;
}


