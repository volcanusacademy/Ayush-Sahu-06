//Find factorial using recursionC ProgrammingFunction
#include<stdio.h>
int Factorial(int t)
{
	int num=1;
	if(t>0)
	{
	
	for(int i=1;i<=t;i++)
	{
		num = num*i; 
	}
	return num;
   }
   else {
   	return 0;
   }
}
int main()

{
	int n;
	printf("Enter the Num=");
	scanf("%d",&n);
	int  f = Factorial(n);
	printf("Factorial=%d",f);
	return 0;
}