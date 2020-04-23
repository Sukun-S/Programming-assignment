#include<stdio.h>
int main()
{
    
    float km, m, f;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    /* calculate the conversion */
    m = km * 1000;
    f = km * 3280.84; // conversion values
 
    printf("The distance in Feet: %f\n", f);
    printf("The distance in Meters: %f\n", m);
    return (0);
}


