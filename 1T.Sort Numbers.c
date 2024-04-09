    #include<stdio.h>
     
    int main()
    {
     int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
      int max,min;
     if(a>=b && a>=c) max=a;
     else if(b>=a && b>=c) max=b;
     else max=c;
     
     if(a<=b && a<=c) min=a;
     else if(b<=a && b<=c) min=b;
     else min=c;
     
     int sum = a+b+c;
     int num = sum-(max+min);
     
      printf("%d\n%d\n%d\n\n",min,num,max);
     printf("%d\n%d\n%d\n",a,b,c);
     
     return 0;
     
    }
