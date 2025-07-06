/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
   
   
   // Type of Triangle
   
   
  
#include<stdio.h>
#include<math.h>
int main()
{   

   int l1,l2,l3;
  
   
   printf("Enter the lenght 1:");
   scanf("%d",&l1);
   
   printf("Enter the lenght 2:");
   scanf("%d",&l2);
   
   printf("Enter the lenght 3:");
   scanf("%d",&l3);
   
   int s= (l1+l2+l3)/2;
   int A = sqrt(s*(s-l1)*(s-l2)*(s-l3));
   
   if(l1==l2 && l2==l3 && l1==l3)
   { 
      printf("The given triangle is Equilateral triangle\n");
      printf("The area is %d\n",A);
      printf("Perimeter is %d",2*s);
   
   }
   
   else if(l1==l2 || l2==l3 || l1==l3)
   {  printf("The given triangle is Isosceles triangle\n");
      printf("The area is %d\n",A);
      printf("Perimeter is 2%d",2*s);
   
   }
   
   else if(l1*l1==l2*l2 + l3*l3 || l2*l2== l1*l1 + l3*l3 || l3*l3== l1*l1 + l2*l2)
   {  printf("The given triangle is Right angle triangle \n");
      printf("The area is %d\n",A);
      printf("Perimeter is 2%d\n",2*s);
   
   }
   else if(l1!=l2!=l3)
   {  printf("The given triangle is Scalene triangle");
      printf("The area is %d\n",A);
      printf("Perimeter is 2%d\n",2*s);
   }
   
   return 0;
   
}




/*Enter the lenght 1:10
Enter the lenght 2:10
Enter the lenght 3:10
The given triangle is Equilateral triangle
The area is 43
Perimeter is 30*/
