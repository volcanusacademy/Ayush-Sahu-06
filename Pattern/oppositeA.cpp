// Online C compiler to run C program online
#include <stdio.h>
int main() {
   int i, j, r,t=97;
   printf("Enter the number of rows: ");
   scanf("%d", &r);
   for (i = r;i>=0; --i) {
   	for (j = 0; j>=i;++j){
         printf("%c",i+t);
		 t++;
         }
       
      printf("\n");
   }
   return 0;
}
