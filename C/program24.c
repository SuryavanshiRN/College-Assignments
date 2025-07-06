#include<stdio.h>
int main()
{ 
   int marks[5],num;
   
   printf("Enter the number of students: ");
   scanf("%d",&num);
   
   for(int i=0;i<num;i++){
    
    printf("Enter the marks for %d: ",i);
    scanf("%d",&marks[i]);
    }
    
    printf("Marks are: \n");
    
    for(int i=0;i<num;i++){
    
    printf("%d\n",marks[i]);
    
    }
    
    return 0;
    
    }
   
   
   
   
   
/* Enter the number of students: 5
Enter the marks for 0: 34
Enter the marks for 1: 45
Enter the marks for 2: 67
Enter the marks for 3: 33
Enter the marks for 4: 67
Marks are: 
34
45
67
33
67
*/

