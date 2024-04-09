    #include<stdio.h>
    int main()
    {
     
       int a;
       scanf("%d",&a);
     
       int first = a;
       while(first>=10)
       {
        first=first/10;
       }
     
       int last = a%10;
     
     
       if(last%first==0 || first%last==0)
       {
        printf("YES");
       }
       else{
        printf("NO");
       }
     
        return 0;
    }