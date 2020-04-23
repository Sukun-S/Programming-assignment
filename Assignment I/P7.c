

#include<stdio.h>
#include<math.h>


int main() {
    float p,r,t,SI, ci;
    
     printf("Enter the value of Principle, rate and time\n");
     scanf("%f%f%f",&p,&r,&t);
     SI = (p * r * t)/100;    // calculate using the formula

     ci=p*pow((1+r/100),t);
	
     printf("Bank Loans Compound Interest = %f",ci);
	
     printf("Simple interest of %f, %f and %f is %f\n",p,r,t,SI);


    return 0;
}
