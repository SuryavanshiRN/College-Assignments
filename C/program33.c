/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
   
   
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
