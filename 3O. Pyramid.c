#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int digit;
    while(n--)
    {
        int num;
        scanf("%d",&num);

        if(num==0)
        {
            printf("0\n");
            continue;
        }

        while(num>0)
        {
            digit = num %10;
            num=num/10;
            printf("%d ",digit);
            
        }
        printf("\n");
          

    }


}