// Online C compiler to run C program online
/*
Greatest Number

*/
#include <stdio.h>
int main() {
   int a,b,c,d;
   scanf("%d%d%d%d",&a,&b,&c,&d);
   if(a>b && a>c && a>c && a>d)
   {
   	printf("Greatest=%d",a);
   }
 else if(b>a && b>c && a>d)
   {
   	printf("Greatest=%d",b);
   }
   else if(c>a && c>c && c>d)
   {
   	printf("Greatest=%d",c);
   }
   else{
   
   printf(" Greatest==%d",d);
 
}
   return 0;
}
