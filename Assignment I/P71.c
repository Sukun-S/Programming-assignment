#include<stdio.h>
 
int main() {
    int p,r,t,SI;
    
    printf("Enter the value of Principle, rate and time\n");
    scanf("%d%d%d",&p,&r,&t);
    SI = (p * r * t)/100;    // calculate using t he formula
     printf("Simple interest of %d, %d and %d is %d\n",p,r,t,SI);
    return 0;
}
