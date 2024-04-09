    #include<stdio.h>
    int main()
    {
       int l1,r1,l2,r2;
       int lb,rb;
       scanf("%d%d%d%d",&l1,&r1,&l2,&r2);
       if(l1>l2)
       {
        lb=l1;
       }
       else
       lb=l2;
     
       if(r1>r2)
       {
        rb=r2;
       }
       else
       {
        rb=r1;
       }
     
       if(lb<=rb)
       {
        printf("%d %d\n", lb, rb);
       }
       else{
        printf("-1\n");
       }
     
        return 0;
    }