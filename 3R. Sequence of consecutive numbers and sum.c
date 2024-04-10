    #include<stdio.h>
    int main()
    {
       int n;
       int m;
       
       while(1)
       {
        int sum=0;
        scanf("%d %d",&n,&m);
           if(n<=0 || m<=0)
        {
            break;
        }
     
        if(n>m)
        {
            int temp=n;
            n=m;
            m=temp;
        }
        for(int i=n;i<=m;i++)
        {
            printf("%d ",i);
            sum+=i;
        }
        printf("sum =%d\n",sum);
     
       }
     
     
        return 0;
    }