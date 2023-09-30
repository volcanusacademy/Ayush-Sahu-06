/*Function with multiple parametersC Create a c program to find the area of rectangle
 by passing length and breadth in function's parameter also return value from it.*/
 #include<stdio.h>
int Rectangle(int a,int b)
{
	return a*b;
}
int main()
{
	int l,b;
	printf("Enter the Length=");
	scanf("%d",&l);
	printf("Enter the Breadth=");
	scanf("%d",&b);
	int r=Rectangle(l,b);
	printf("Area of rectangle==%d",r);
	return 0;
}