#include <stdio.h>
#include <math.h>
 
int main()
{
    float a, r, lastterm, sum = 0;
    int n;
 
    printf("Enter the first term of the G.P. series: ");
    scanf("%f", &a);

    printf("Enter the total numbers in the G.P. series: ");
    scanf("%d", &n);

    printf("Enter the common ratio of G.P. series: ");
    scanf("%f", &r);

    sum = (a *(1 - pow(r, n + 1))) / (1 - r); // formula 
    lastterm = a * pow(r, n - 1);

    printf("lastterm term of G.P.: %f", lastterm);
    printf("\n Sum of the G.P.: %f", sum);
    return 0;
}
