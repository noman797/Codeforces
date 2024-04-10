#include<stdio.h>
int main()
{
    int n,m,i;

    scanf("%d",&n);

    while(n--)
    {
    scanf("%d",&m);
    long long fact=1;
    for(i=1;i<=m;i++)
    {
        fact*=i;
    }
    printf("%d\n",fact);
    }
    
    return 0;
}