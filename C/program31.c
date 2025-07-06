/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
   
   
   // String operations - copy and swapping



#include<stdio.h>
//#include<stdlib.h>
#include<string.h>

int main()
{ 
   char str1[20],str2[20],str3[20];
  
   
   printf("Enter the string 1: ");
   scanf("%s",str1);
   
   printf("Enter the string 2: ");
   scanf("%s",str2);
   
  
   //str1= str2
   printf("\nBEFORE\n");
   printf("\nThe string 1 is %s", str1);
   printf("\nThe string 2 is %s", str2);
   printf("\n\nAFTER swapping\n");
   strcpy(str3,str1);
   
   strcpy(str1,str2);
   strcpy(str2,str3);
   printf("\nThe string 1 is %s", str1);
   printf("\nThe string 2 is %s", str2);
   
   return 0;
   
   }
   
   
   
/*Enter the string 1: Aryan
Enter the string 2: Suryavanshi

BEFORE

The string 1 is Aryan
The string 2 is Suryavanshi

AFTER swapping

The string 1 is Suryavanshi
The string 2 is Aryan*/
