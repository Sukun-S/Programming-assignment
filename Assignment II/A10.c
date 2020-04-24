#include <stdio.h>

int main()
{
    int a; 
    float per; 

    /* Input marks of five subjects from user */
    printf("Enter marks: ");
    scanf("%d", &a);


    /* Calculate percentage */
    per = (a/500.0)*100;

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
