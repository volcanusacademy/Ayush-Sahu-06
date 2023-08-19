// Online C compiler to run C program online
#include <stdio.h>
int main() {
   int i, j, r;
   printf("Enter the number of rows: ");
   scanf("%d", &r);
   for (i = 1; i<=r; ++i) {
   	 for (j = 1; j<=i;++j){
 	if(i==j){
			
       printf("*");
     }
     else {
     	printf(" ");
        }
}
   printf("\n");
}
   return 0;
}
