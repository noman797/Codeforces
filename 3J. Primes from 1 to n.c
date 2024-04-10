#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=2;i<=n;i++)
    {
        bool flag = true;
        
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            printf("%d ",i);
        }

    }

    return 0;
}