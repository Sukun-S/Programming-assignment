

//roots of a quadratic equation

//a*x*x+b*x+c=0;
//root1,root2=sqrt(b*b- + 4*a*c)/2*a;

#include<stdio.h>
#include<math.h>

int main()
{
    
    float a,b,c;
    float root1,root2;
    float root_part, denom;
    
    
    root_part = sqrt(b*b- 4*a*c); //if a equaltion's denominaor is 0 then its not quadratic its linear.
    denom= 2*a;
    
    
   root1= (-b+root_part)/denom;
   root2 =(-b-root_part)/denom;
    
    printf("Roots= %f\n  Root2=%f", root1, root2);
    
    return 0;
    
    
    
    
}
