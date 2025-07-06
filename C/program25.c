#include<stdio.h>
int main()
{ 
   int marks[5],num,x=0;
   
   printf("Enter the number of students: ");
   scanf("%d",&num);
   
   for(int i=0;i<num;i++){
    
    printf("Enter the marks for %d: ",i);
    scanf("%d",&marks[i]);
    }
    
    printf("\nMarks are: \n");
    
    for(int i=0;i<num;i++){
    
    printf("%d\n",marks[i]);
    
    }
    
    printf("\n\nReverse order marks are: \n");
    for(int i=num-1;i>=0;i--){
    
    printf("%d\n",marks[i]);
    
    }
    
    printf("\n\nAddition of the marks is: \n");
    for(int i=0;i<num;i++){
    
    x= x + marks[i];
    i++;
    
   
    }
    
    printf("%d\n",x);
    
    printf("\n\nAverage of the marks is %d: \n", x/5);
    
    return 0;
    
    }
    
    
    
    
    
    
    
/*Enter the number of students: 5
Enter the marks for 0: 43
Enter the marks for 1: 23
Enter the marks for 2: 65
Enter the marks for 3: 76
Enter the marks for 4: 87

Marks are: 
43
23
65
76
87


Reverse order marks are: 
87
76
65
23
43


Addition of the marks is: 
195


Average of the marks is 39: 

*/

