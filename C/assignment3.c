/* Name= Aryan Ashok Suryavanshi
   Dept.= AI DS
   DIV.= B
   Roll no.= 62*/
   
   
   
   // Marks of the students


#include<stdio.h>
int main()

{
  int min=99, max=0, marks, num, count=0;
  
  printf("Enter the number of students: ");
  scanf("%d",&num);
  
  for(int i=1;i<=num;i++){
  
  printf("Enter the Marks of student %d: ",i);
  scanf("%d",&marks);
  
  if(marks <= min) {
  min=marks;
  }
  
  
  if(marks >= max) {
  max=marks;
  }
  
  if(marks > 40){
  count++;
  }
  }
  printf("Number of students is : %d ",num);
  printf("\nMinimum marks obtained is : %d ",min);
  printf("\nMaximum marks obtained is : %d",max);
  printf("\nNumber of students passed is : %d \n",count);
  
  return 0;
 
 
}

/*Enter the number of students: 8
Enter the Marks of student 1: 45
Enter the Marks of student 2: 66
Enter the Marks of student 3: 77
Enter the Marks of student 4: 84
Enter the Marks of student 5: 33
Enter the Marks of student 6: 26
Enter the Marks of student 7: 99
Enter the Marks of student 8: 50
Number of students is : 8 
Minimum marks obtained is : 26 
Maximum marks obtained is : 99
Number of students passed is : 6 */





/*Enter the number of students: 6   


Enter the Marks of student 1: 56
Number of students is : 6 
Minimum marks obtained is : 56 
Maximum marks obtained is : 56
Number of students passed is : 1 


Enter the Marks of student 2: 39
Number of students is : 6 
Minimum marks obtained is : 39 
Maximum marks obtained is : 56
Number of students passed is : 1 


Enter the Marks of student 3: 99
Number of students is : 6 
Minimum marks obtained is : 39 
Maximum marks obtained is : 99
Number of students passed is : 2 


Enter the Marks of student 4: 23
Number of students is : 6 
Minimum marks obtained is : 23 
Maximum marks obtained is : 99
Number of students passed is : 2 


Enter the Marks of student 5: 36
Number of students is : 6 
Minimum marks obtained is : 23 
Maximum marks obtained is : 99
Number of students passed is : 2 


Enter the Marks of student 6: 66
Number of students is : 6 
Minimum marks obtained is : 23 
Maximum marks obtained is : 99
Number of students passed is : 3
*/
