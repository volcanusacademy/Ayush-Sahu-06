#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter the value");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
		  b++;
		}
		else if(b==2)
		{
				printf("No is prime");
		}
		else 
		{
			printf("No is not  prime");
		}
   	}
	
	
	return 0;
}


