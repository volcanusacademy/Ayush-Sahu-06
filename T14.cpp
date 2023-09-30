/*Function with return typeC Programming Function Create a program in c to find square of a given number
 , pass the value to the function and set it's return type and display.*/
#include<stdio.h>
int square(int s)
{
	return s*s;
}
int main()
{
	int p;
	printf("Enter the Number");
	scanf("%d",&p);
	int t=square(p);
	printf("Square==%d",t);
	return 0;
}