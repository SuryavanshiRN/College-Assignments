/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
   // Voter's eligibility
   
   
#include<stdio.h>
int main()
{   
   int a;
   
   
   printf("Enter the voter's age:");
   scanf("%d",&a);
  
   if(a>17)
   {
   
    printf("Voter is eligible to vote");
    
    }
    
    else
    {
        printf("Voter is not eligible to vote");
   
    }
    
    return 0;
 }



/*Enter the voter's age:18
Voter is eligible to vote

Enter the voter's age:17
Voter is not eligible to vote*/
