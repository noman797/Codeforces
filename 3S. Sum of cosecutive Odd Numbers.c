    #include<stdio.h>
    int main()
    {
       int n;
       int m;
       int t;
       scanf("%d",&t);
     
       while(t--)
       {
        int sum = 0;
        scanf("%d %d",&n,&m);
     
        if(n>m)
        {
            int temp=n;
            n=m;
            m=temp;
        }
        for(int i=n+1;i<m;i++)
        {
            if(i%2!=0)
            {
            sum+=i;
            }
        }
         printf("%d\n",sum);
     
       }
     
        return 0;
    }