/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
   
   
   // String operations - Assignment 4




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
   
   
   // String operations - concatenation
   
   
   #include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{ 
   char str1[20],str2[20],str3[20];
   char result1,result2;
   
   printf("Enter the string 1: ");
   scanf("%s",str1);
   
   printf("Enter the string 2: ");
   scanf("%s",str2);
   
  
   strcat(str3,str1);
   strcat(str1,str2);
   strcat(str2,str3);
   
   
   
   
  /* printf("\nThe string 1 is %s", str1);
   printf("\nThe string 2 is %s\n", str2);
   */
   puts(str1);
   puts(str2);
   return 0;
   
   }
   
   // String operations - compare

   
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{ 
   char str1[20],str2[20];
   int result;
   
   printf("Enter the string 1: ");
   scanf("%s",str1);
   
   printf("Enter the string 2: ");
   scanf("%s",str2);
   
   result=strcmp(str1,str2);
  
   if(result==0){
   
   printf("The strings are equal");
   }
   
   else
   {
   printf("The strings are not equal");
   }
   return 0;
   
   }
   
   
