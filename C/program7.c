/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/


// Rate of Interest



#include<stdio.h>
int main()
{   
    int p;
    float r;
    float t;
    float SI;
    
    printf("Enter the Principle Amount: ");
    scanf("%d",&p);
     
    printf("Enter the Rate of Interest:");
    scanf("%f",&r);
    
    printf("Enter the Tenure (in years):");
    scanf("%f",&t);
    
    SI= (p*r*t)/100;
    
    printf("The simple interest is %f\n",SI);
    return 0;
    
}
    
    
    
    
/*Enter the Principle Amount: 25000
Enter the Rate of Interest:25
Enter the Tenure (in years):2
The simple interest is 12500.000000*/

    
