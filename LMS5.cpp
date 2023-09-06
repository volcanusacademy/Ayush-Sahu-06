//Write a program in c to find the sum of all even numbers starting from 1 to 100
#include <stdio.h>  
int main()  
{  
    int i,sum=0;;    
    for(i=1; i<=100; i++)
	{  
        if(i%2==0)
        sum=sum+i;
		  
    }  
    printf("Sum of all even numbers 1 to 100 =%d",sum);  
   

	
	return 0;
}
