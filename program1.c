/* Print ASCII cjharacters from 91 to 96 */
#include <stdio.h>

int main()
{
    int i;

    for(i=91; i<=96; i++) 
    {
        printf("ASCII character %d = %c\n",i, i);
    }

    return 0;
}