#include<stdio.h>
int main()
{
 
     long long int e,m,b;
 
     scanf("%lld %lld %lld",&e,&m,&b);
 
     long long int min =0;
 
     if(e<m && e<b)
     {
        min=e;
     }
          if(m<e && m<b)
     {
        min=m;
     }
          if(b<e && b<m)
     {
        min=b;
     }
 
     long long int newE = (e-min)/2;
 
     long long int newM = m-min;
 
     long long int newB =b-min;
 
     if(newE<=newB)
     {
        printf("%lld",newE+min);
     }
     else if (newB<=newE)
        {
         printf("%lld",newB+min);
        }

        return 0;
}