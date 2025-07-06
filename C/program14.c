/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
   
   
   // Electricity bill
   
   
   

#include<stdio.h>
int main()
{   

   int a,b1,b2,b3,b4;
   
   printf("Enter the electricity units consumed:");
   scanf("%d",&a);
  
   
    if(a<=50)
    {
    b1= 0.5*a + 20*a/100;
    printf("Your total electricity bill is:%d",b1);
    
    }
    
    else if(a<=100 && a>50)
    {
    b2= 0.75*a+ 20*a/100;
    printf("Your total electricity bill is:%d",b2);   
   
    }
    
    
    else if(a<=200 && a>100)
    {
    b3= 1.20*a+ 20*a/100;
    printf("Your total electricity bill is:%d",b3);   
   
    }
    
    
    else if(a>200)
    {
    b4= 1.50*a+ 20*a/100;
    printf("Your total electricity bill is:%d",b4);   
   
    }
    
    else
    {
        printf("Invalid input");
   
    }
    return 0;
    
 }
 
 
/*Enter the electricity units consumed:40
Your total electricity bill is:28

Enter the electricity units consumed:80
Your total electricity bill is:76

Enter the electricity units consumed:240
Your total electricity bill is:408
 */
 
 
