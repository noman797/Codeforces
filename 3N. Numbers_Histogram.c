    #include<stdio.h>
    int main()
    {
        int i,n,j,m;
        char ch;
        scanf("%c",&ch);
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&m);
            for(i=1;i<=m;i++)
            {
                printf("%c",ch);
            }
            printf("\n");
     
        }
    }