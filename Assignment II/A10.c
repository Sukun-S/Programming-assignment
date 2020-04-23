#include <stdio.h>

int main()
{
    int a, b, c, d, e; 
    float per; 

    /* Input marks of five subjects from user */
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);


    /* Calculate percentage */
    per = (a + b + c + d + e) / 5.0;

    printf("Percentage = %.2f\n", per);


    /* Find grade according to the percentage */
    if(per >= 90)
    {
        printf("Grade A+");
    }
    else if(per >= 80)
    {
        printf("Grade A");
    }
    else if(per >= 70)
    {
        printf("Grade B+");
    }
    else if(per >= 60)
    {
        printf("Grade B");
    }
    else if(per >= 50)
    {
        printf("Grade C");
    
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
