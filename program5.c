#include <stdio.h>
int main ()
{
    char ch;
    printf("enter a character \n");
    scanf("%c", &ch);
    if (ch>='0' && ch<='9')
   { printf("number is digit");
   }
else
{
    printf("number is not digit");
}
 return 0;
}