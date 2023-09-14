//1	Single dimension array to store student's marks C ProgrammingArrays
#include<stdio.h>
int main()
{
	int arr[50],i,n=3;
	
	printf("Enter the marks==");
	for(int i=0;i<=n;i++){
	scanf("%d",&arr[i]);
    }  
    printf("Students Marks:");
   for(int i=0;i<=n;i++){
	printf("%d\n",arr[i]);
    }
	return 0;
}
