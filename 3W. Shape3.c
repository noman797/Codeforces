    #include<stdio.h>
    int main()
    {
        int n;
        scanf("%d",&n);
        int nst =1;
        for(int i=1;i<=n;i++) // no of rows
        {
            for(int k=1;k<=n-i;k++)
            {
               printf(" ");
            }
             for(int j=1;j<=nst;j++) //no of coulums
             {
                printf("*");
             }
             nst=nst+2;
             printf("\n");
        }
     
        nst = nst-2;
            for(int i=n;i>=1;i--) 
        {
            for(int k=1;k<=n-i;k++)
            {
               printf(" ");
            }
             for(int j=1;j<=nst;j++) 
             {
                printf("*");
             }
             nst=nst-2;
             printf("\n");
        }
        return 0;
    }