    #include<stdio.h>
    int main()
    {
       int a,b,res;
       char op;
       scanf("%d %c %d",&a,&op,&b);
       if(op=='+')
       {
          res = a+b;
          printf("%d\n",res);
       }
       if(op=='-')
       {
         res= a-b;
         printf("%d\n",a-b);
       }
       if(op=='*')
       {
         res = a*b;
         printf("%d\n",a*b);
       }
       if(op=='/')
       {
        res = a/b;   
        printf("%d\n",res);
       }
        return 0;
    }