    #include<stdio.h>
    int main()
    {
       double  n,k,a;
       scanf("%lf %lf %lf", &n,&k,&a);
       long long x = (k*n)/a;
       double q =(k*n)/a;
       double test = q-x;
       if(test>0)
       {
        printf("double");
       }
       else if(q>2147483647)
       {
        printf("long long");
       }
       else
       {
        printf("int");
       }
     
        return 0;
    }