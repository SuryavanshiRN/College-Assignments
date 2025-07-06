/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
   
   
   // String operations - length



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{ 
   char str1[20],str2[20];
   int result1,result2;
   
   printf("Enter the string 1: ");
   scanf("%s",str1);
   
   printf("Enter the string 2: ");
   scanf("%s",str2);
   
   result1= strlen(str1);
   result2= strlen(str2);
   
   printf("\n\nThe length of the string %s is %d.",str1,result1);
   printf("\nThe length of the string %s is %d.",str2,result2);
   
   return 0;
   
   }
   
   
   
/*Enter the string 1: Aryan
Enter the string 2: Rakesh


The length of the string Aryan is 5.
The length of the string Rakesh is 6.*/
