//Task2 3
//C Program To Check Neon Number.
#include <stdio.h>
#include<math.h>
int main() {
    // Write C code here
    int p,n,k,s=0,rem=0;
    printf("Enter the Number==");
    scanf("%d",&n);
    p=n*n;
    
    while(p>0)
    {
      rem=p%10;
      s=rem+s;
      p=p/10;
    }
    if(s==n)
    printf("Num you put is Neon %d",n);
    else
    printf("Num is not Neon");

    return 0;
}
