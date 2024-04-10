    #include<stdio.h>
    int main()
    {
      int n;
      scanf("%d",&n);
      int count = 1;
      int i;
      for(i=1;i<=n;i++)
      {
        printf("%d %d %d PUM\n",count,count+1,count+2);
        count = count+4;
      }
     
        return 0;
    }