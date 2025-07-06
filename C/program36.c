#include <stdio.h>


//Quadrants

int main() {
   
    int a,b;
    printf("Enter point on x: ");
    scanf("%d",&a);
    printf("Enter point on y: ");
    scanf("%d",&b);
   
    if(a>0 && b>0)
    { printf("First quadrant");
       
    }
   
    if(a<0 && b>0)
    { printf("Second quadrant");
       
    }
    if(a<0 && b<0)
    { printf("Third quadrant");
       
    }
    if(a>0 && b<0)
    { printf("Fourth quadrant");
       
    }
    if(a==0 && b==0)
    { printf("Origin");
       
    }
   
    return 0;
}

	

