/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
   // Divisibility by a given number
   
   
   
#include<stdio.h>
int main()
{   
   int a;
   
   printf("Enter the Number:");
   scanf("%d",&a);
  
   
   if(a%5==0 && a%11==0)
   {
   
    printf("It is divisible by 5 and 11");
    
    }
    
    else
    {
        printf("It is not divisible by 5 and 11");
   
    }
    
    return 0;
    
 }
 
 
 
/*Enter the Number:55
It is divisible by 5 and 11

Enter the Number:46
It is not divisible by 5 and 11*/
