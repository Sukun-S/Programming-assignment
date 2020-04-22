#include<stdio.h>

int main ()
{
    
    int sub1 = 0, sub2 = 0, sub3 = 0, sub4 = 0, sub5 = 0, aggmarks  = 0; // all the variables are here
    float percentmarks = 0;
    printf("Plese enter the marks of the student in subject 1: "); // ask for the subjects
    scanf("%d",&sub1);
    printf("\nnow enter the marks of the student in subject 2: ");
    scanf("%d",&sub2);
    printf("\nnow enter the marks of the student in subject 3: ");
    scanf("%d",&sub3);
    printf("\nnow enter the marks of the student in subject 4: ");
    scanf("%d",&sub4);
    printf("\nnow enter the marks of the student in subject 5: ");
    scanf("%d",&sub5);
    aggmarks = sub1 + sub2 +sub3 +sub4 +sub5; // calculate all the marks 
    percentmarks = (aggmarks/500.0)*100.0;
    printf("\n________________________________________\n"); // show the results
    printf("\nAggregate Marks of the Student are: %d \n",aggmarks);
    printf("\nwhich are %f percent of total marks.",percentmarks);
    
    return 0;
}
