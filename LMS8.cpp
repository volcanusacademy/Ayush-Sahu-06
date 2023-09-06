//Write a c program to display table of given number using for loop Example -> 9 x 1 = 9 9 x 2 = 18 9 x 3 =27 ... etc
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number=");
	scanf("%d",&n);
	
	for(int i=1;i<=10;++i)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
