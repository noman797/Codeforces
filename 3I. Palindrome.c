#include<stdio.h>
int main()
{
  int n, rev=0, rem, i;
  scanf("%d",&n);
    int num=n;
   while(n!=0)
   {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
   }
   printf("%d\n",rev);

   if(num==rev)
   {
   printf("YES\n");
   }
   else
   {
    printf("NO\n");
   }

    return 0;
}