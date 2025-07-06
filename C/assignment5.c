/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
   
  


#include<stdio.h>

struct cust
{
  char name[20];
  int contct;
  char city[20];
  char gender[20];
  
  } cust[20];
  
  
int main()
{
  int n;
  
printf("Enter the number of customers: ");
scanf("%d",&n);

for(int i=0;i<n;i++)
{ 
printf("Enter the name of customer: ");
scanf("%s",cust[i].name);

printf("Enter the gender: ");
scanf("%s",cust[i].gender);

printf("Enter the city of customer: ");
scanf("%s",cust[i].city);

printf("Enter the contact number: ");
scanf("%d",&cust[i].contct);


}


printf("Name\t Gender\t City\t contact\n");


for(int i=0;i<n;i++)
{ printf("%s\t %s\t %s\t %d\n",cust[i].name,cust[i].gender,cust[i].city,cust[i].contct);

}

return 0;

}

