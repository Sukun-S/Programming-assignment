#include<stdio.h>
int main()
{
    float km, m, cm, f, in;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    /* calculate the conversion */
    m = km * 1000;
    cm = km * 1000 * 100;
    f = km * 3280.84; // conversion values
    in = km * 39370.08; // conversion values
    printf("The distance in Feet: %f\n", f);
    printf("The distance in Inches: %f\n", in);
    printf("The distance in Meters: %f\n", m);
    printf("The distance in Centimeters: %f\n", cm);
    return (0);
}


