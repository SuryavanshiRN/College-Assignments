/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
   
   // Grades
   
   
   
#include<stdio.h>
int main()
{   
   int a;
   
   printf("Enter the Percentage:");
   scanf("%d",&a);
  
   
    if(a>=90)
    {
   
    printf("Your grade is Distinction");
    
    }
    
    else if(a<90 && a>=80)
    {
        printf("Your grade is A");
   
    }
    
    else if(a<80 && a>=70)
    {
        printf("Your grade is B");
   
    }
    
    
    else if(a<70 && a>=60)
    {
        printf("Your grade is C");
   
    }
    
    
    else if(a<60 && a>=40)
    {
        printf("Your grade is D");
   
    }
    
    else
    {
        printf("Your are Fail");
   
    }
    return 0;
    
 }
 
 
 
 
 
 
/*Enter the Percentage:25
Your are Fail
Enter the Percentage:67
Your grade is C
Enter the Percentage:89
Your grade is A
Enter the Percentage:97
Your grade is Distinction*/
