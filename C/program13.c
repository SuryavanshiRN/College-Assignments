/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
  //In Hand Salary
  
   
#include<stdio.h>
int main()
{   
   int a;
   int HRA;
   int DA;
   int A1;
   int HRA1;
   int DA1;
   int A2;
   int HRA2;
   int DA2;
   int A3;
   
   
   
   printf("Enter the Basic Salary:");
   scanf("%d",&a);
  
   
    if(a<=10000)
    {
    HRA = 20*a/100;
    DA = 80*a/100;
    
    A1= a+HRA+DA;
    printf("In hand salary is %d",A1);
    
    }
    
    else if(a>=10000 && a<20000)
    {
    HRA1 = 25*a/100;
    DA1 = 90*a/100;
    A2= a+HRA1+DA1;
    printf("In hand salary is %d",A2);
    
   
    }
    
    else if(a>20000)
    {
    HRA2 = 30*a/100;
    DA2 = 95*a/100;
    A3= a+HRA2+DA2;
    printf("In hand salary is %d",A3);
    
   
    }
    
   
   return 0;
   
   
 }
    
    
    
    
    
/*Enter the Basic Salary:25000
In hand salary is 56250*/
   
