#include<stdio.h>

void sum();
void difference();
void multiplication();
void division();

int main()
{  


   int a,d;
   
   do{
   
   printf("Welcome to calculator");
   printf("\n\nPress\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
   printf("\n5.Exit\n\n");
   printf("Enter the operation number: ");
   scanf("%d",&a);
   
   if(a==1){
   
   sum();
   }
   
   if(a==2){
   
   difference();
   }
   
   if(a==3){
   
   multiplication();
   
   }
   
   if(a==4){
   
   division();
   
   }
   
   
   
   
   }
   
   while(a!=5);
   
   printf("Thank you\n\n");
   return 0;
   
   }
   
   void sum(){
   
   float x,y,z;
   
   printf("Enter the number one: ");
   scanf("%f",&x);
   printf("Enter the number two: ");
   scanf("%f",&y);
   
   z=x+y;
   
   printf("The sum is %f.\n\n",z);
   
   }
   
   
   void difference(){
   
   float x,y,z;
   
   printf("Enter the number one: ");
   scanf("%f",&x);
   printf("Enter the number two: ");
   scanf("%f",&y);
   
   z=x-y;
   
   printf("The difference is %f.\n\n",z);
   
   }
   
   void multiplication(){
   
   float x,y,z;
   
   printf("Enter the number one: ");
   scanf("%f",&x);
   printf("Enter the number two: ");
   scanf("%f",&y);
   
   z=x*y;
   
   printf("The multiplication is %f.\n\n",z);
   
   }
   
   void division(){
   
   float x,y,z;
   
   printf("Enter the number one: ");
   scanf("%f",&x);
   printf("Enter the number two: ");
   scanf("%f",&y);
   
   z=x/y;
   
   printf("The division is %f.\n\n",z);
   
   }
