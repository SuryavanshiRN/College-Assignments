/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
  //Day number and day
  
  
#include <stdio.h> 
int main() 
{  
    int day;
   
    printf("Enter Day Number\n");  
    scanf("%d",&day);  
  
    switch(day)
    {
        case 1 : printf("Today is Monday, \n");
            break;
        case 2 : printf("Today is Tuesday\n");
            break;
        case 3 : printf("Today is Wednesday\n");
            break;
        case 4 : printf("Today is Thursday\n");
            break;
        case 5 : printf("Today is Friday\n");
            break;
        case 6 : printf("Today is Saturday\n");
            break;
        case 7 : printf("Today is Sunday\n");
            break;
        default: printf("Invalid choice, try again\n");   
            break;       
    }
    printf("Have a good day");
    return 0;
    
    }
    
    
    
/* Enter Day Number
6
Saturday*/

