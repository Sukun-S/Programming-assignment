#include <stdio.h>

int main()
{
    float basic, gross, da, hra, np, tax;

    /* Input basic salary of employee */
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);


    /* Calculate D.A and H.R.A according to specified conditions */
    if(basic <= 12000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
 	tax=0;
 	gross=basic+hra+da;
 	np=gross-tax;
 	printf("The gross pay is %f",gross);
 	printf("The net pay is %f",np);
    }
    else if((basic >= 12000)&&(basic<30000))
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
	gross=basic+hra+da;
	tax=basic * 0.12;
 	np=gross-tax;
 	printf("The gross pay is %f",gross);
 	printf("The net pay is %f",np);
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
	gross=basic+hra+da;
	tax = basic*0.15;
 	np=gross-tax;
 	printf("The gross pay is %f\n",gross);
 	printf("The net pay is %f\n",np);
    }

  

    return 0;
}
