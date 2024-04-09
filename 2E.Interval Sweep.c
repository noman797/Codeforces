    #include<stdio.h>
    int main()
    {
     
       int a,b;
       scanf("%d %d",&a,&b);
       if(a==0 && a==b)
       printf("NO");
     
       else if (a-b==1 || a-b==0 || b-a==1)
       printf("YES");
       else
       printf("NO");
     
        return 0;
    }