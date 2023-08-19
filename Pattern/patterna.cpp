// Online C compiler to run C program online
#include<stdio.h>
void function(){
    int a,b;
    	printf("Enter the First num=:");
	scanf("%d",&a);
	printf("Enter the Second Num:");
	scanf("%d",&b);

for(int i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
		else
		{
			printf(" ");
		}
	}
}
int main()
{
    function();
	
	
}
