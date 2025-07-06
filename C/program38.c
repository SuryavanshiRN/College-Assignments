#include<stdio.h>

void upr_rght_tr();
void lwr_rght_tr();
void vct_rght_tr();
int main(){ 
int a;
   do{
   
   printf("Triangular patterns\n");
   printf("\n\nPress\n1.For upper Right-angled triangle using asteris.\n2.For lower Right-angled triangle using asteris.\n3.For vacant Right-angled triangle using asteris.\n");
   printf("\n4.Exit\n\n");
   printf("Enter the operation number: ");
   scanf("%d",&a);
   
   if(a==1)
   {   
      upr_rght_tr();
      
      }
      
   if(a==2)
   {   
      lwr_rght_tr();
      
      }
      
      
    if(a==3)
   {   
      vct_rght_tr();
      
      }  
      
      }
  while(a!=4);
    printf("Thank you");
    return 0;
    
      }
      
      void upr_rght_tr()
      {
        int i,j,n;
        printf("Enter the number of rows: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++)
            
            printf("*");
            
            printf("\n");
            
            
            }
            
      }
            
            
      void lwr_rght_tr()
      {
        int i,j,n;
        printf("Enter the number of rows: ");
        scanf("%d",&n);
        for(i=n;i>=0;i--){
            for(j=1;j<=i;j++)
            
            printf("*");
            printf("\n");
            
            }
            
      }     
        
      
         
     void vct_rght_tr()
      {
        int i,j,n;
        printf("Enter the number of rows: ");
        scanf("%d",&n);
        for(i=1; i<=n; ++i)
    {
        for(j=1; j <= i; ++j)
        
            if((j==1) || (j==i) || (i==n))
            {
                //Print star
                printf("*");
            }
            else
            {
                //Print space
                printf(" ");
            }
        
        // Print new line
        printf("\n");
    } }
