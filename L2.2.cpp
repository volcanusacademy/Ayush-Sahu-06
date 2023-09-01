#include <stdio.h>

int main() {
    // Write C code here
    int rev,n,rem=0,k;
    printf("Enter the Number=");
    scanf("%d",&n);
    k=n;
   while(n!=0)
    {
        
      rem=n%10;
      rev=rev*10 +rem;
      n/=10;
  
    }
    if(rev==k)
    printf("No is palindrome==%d",k);
    else
    printf("No is not a palindrome==%d",k);
    
   

    return 0;
}
