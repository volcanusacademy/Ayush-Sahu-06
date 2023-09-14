//2	String in reverse order C Programming String
#include<stdio.h>
#include<string.h>
int main()
{

	char  s[50];
	printf("Enter the string:");
	scanf("%s",s);
    strrev(s);
	printf("\nReverse string:=%s",s);

}
