/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
 
  //CALCULATOR
  
  
#include<stdio.h>
int main()
{ 
   int a,b, op;
   
   printf("Select the Operation\n1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n");
   scanf("%d",&op);
  
   printf("Enter the first number:");
   scanf("%d",&a);
   
   
   printf("Enter the second number:");
   scanf("%d",&b);
   
    switch(op)
    {
        case 1 : printf("Sum is %d",a + b );
            break;
        case 2 : printf("\nDifference is %d",a - b);
            break;
        case 3 : printf("\nDivision is %d",a / b);
            break;
        case 4 : printf("\nMultplication is %d",a * b);
            break;    
        default: printf("Thank you");   
            break;       
    }
    
    return 0;
    
}
   
   
   
/*Select the Operation
1.Addition
2.Subtraction
3.Division
4.Multiplication
4
Enter the first number:2
Enter the second number:2

Multplication is 4*/
