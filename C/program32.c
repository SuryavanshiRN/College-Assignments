/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
   
   
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
   
   
   
/*Enter the string 1: Aryan
Enter the string 2: Suryavnshi

The string 1 is AryanSuryavnshi
The string 2 is SuryavnshiAryan
*/
