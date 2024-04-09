    #include<stdio.h>
    int main()
    {
     
       int a,s,b,q,c;
       scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);
       if(s=='+')
       {
        if(a+b==c)
        {
            printf("Yes");
        }
        else
        { 
        
            printf("%d",a+b);
        }
       }
          if(s=='-')
       {
        if(a-b==c)
        {
            printf("Yes");
        }
        else
        { 
        
            printf("%d",a-b);
        }
       }
          if(s=='*')
       {
        if(a*b==c)
        {
            printf("Yes");
        }
        else
        { 
        
            printf("%d",a*b);
        }
       }
     
        return 0;
    }