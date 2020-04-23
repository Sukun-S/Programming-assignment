
#include<stdio.h>
 
#include<string.h> // this one is wrong

 
int main()
 
{

	
 
    char str[ ] = "Modify This String To Upper";
 
    printf("%s\n",strupr(str)); 


    char str[ ] = "MODIFY This String To LOwer";
 
    printf("%s\n",strlwr (str));
 
    return  0;
 
}
