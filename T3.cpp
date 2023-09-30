/*String inbuilt functions C Programming   String-Create a program
 in c to find string length, concatenate strings, copy strings and compare strings using string.h library*/
#include<stdio.h>
#include<string.h>
int main()
{
 char name[40];
 char name1[40];
 char name2[40]="Hello!";
 char name3[80];
    printf("Enter the String=");// Input
	scanf("%s",name);
	int length=strlen(name);// Use Function to Find the Lenght of the string
	printf("Length of the string=%d\n",length);
    strcpy( name1,name);// Copy of the name
    printf("Copy Name1=%s\n",name1);
   // Concatenate str2 to str1
    strcpy(name3, name);  // Copy str1 to result
    strcat(name3, name);  // Concatenate str2 to result
    printf("Concatenated String: %s\n", name3);  
    // Compare the two strings
    int compareResult = strcmp(name, name2);
    if (compareResult == 0) {
        printf("str1 and str2 are equal.\n");
    } else if (compareResult < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }

	
}