#include<stdio.h>
int main()
{
   int n,m,max=0;
   scanf("%d",&n);

   for(int i=1;i<=n;i++)
   {
    scanf("%d",&m);
    if(i==1)
    {
        max=m;
    }
    if(m>max)
    {
        max=m;
    }
   }
   printf("%d\n",max);
    return 0;
}