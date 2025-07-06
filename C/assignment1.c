/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
   
   
   // GST 
   
   
   

#include<stdio.h>
int main()
{   
    int BA;
    int D;
    int DA;
    int B;
    int FB;
    
  
    
    printf("Enter the Bill amount: ");
    scanf("%d",&BA);
    
    printf("Enter the Discount:");
    scanf("%d",&D);
    
    
    DA = (BA*D)/100;
    printf("The discounted amount is %d\n",DA);
    
    B= BA-DA;
    int G;
    printf("Enter the GST rate:");
    scanf("%d",&G);
    int GST;
    GST=G*B/100;
    printf("GST amount is %d\n",GST);
    FB = B+GST;
    
   
    
    printf("The bill to be paid is %d\n",FB);
    return 0;
    
    
 }
    
    
    
    
/*Enter the Bill amount: 20000
Enter the Discount:10
The discounted amount is 2000
Enter the GST rate:20
GST amount is 3600
The bill to be paid is 21600
*/

