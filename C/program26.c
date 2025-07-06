//STAR PATTERN

#include<stdio.h>
float main()
{  int i,n,j;
printf("Enter the number of rows; ");
scanf("%d",&n);
for(i=n;i>0;i--){
    for(j=1;j<=i;j++){
        if(i==n||i==j||i==1||j==1)
        printf("*  ");
        else
        printf("   ");
    }
    printf("\n");
}

return 0;
}

