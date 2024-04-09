    #include<stdio.h>
    int main()
    {
      long long int n,m;
      scanf("%lld %lld", &n,&m);
     long long int ld_one=n%10;
     long long int ld_two=m%10;
     long long int sum = ld_one+ld_two;
     printf("%lld\n",sum);
     
     
     
        return 0;
     
    }