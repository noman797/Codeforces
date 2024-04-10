#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int b;
    int e_count=0,o_count=0,p_count=0,n_count=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&b);
        if(b%2==0)
        e_count++;
        if(b%2!=0)
        o_count++;
        if(b>0)
        p_count++;
        if(b<0)
        n_count++;
    }
    printf("Even: %d\n",e_count);
    printf("Odd: %d\n",o_count);
    printf("Positive: %d\n",p_count);
    printf("Negative: %d\n",n_count);
 
    return 0;
}