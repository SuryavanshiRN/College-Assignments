/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
  //Class Test
  
  
#include<stdio.h>
int main()
{ int FXE, C, LA, AC, Avg;
  printf("Subjects are\nFundamentals of Electronics\nC prog\nLinear Algebra\nApllied Chemistry\n\n");
  
  printf("Marks obtained in FXE: \n");
  scanf("%d",&FXE);
  printf("Marks obtained in C prog:\n");
  scanf("%d",&C);
  printf("Marks obtained in Linear Algebra:\n");
  scanf("%d",&LA);
  printf("Marks obtained in Apllied Chemistry:\n");
  scanf("%d",&AC);
  Avg= (FXE + C + LA + AC)/4;
  
  printf("Avg of all subjects are %d",Avg);
  return 0;
  }

  
