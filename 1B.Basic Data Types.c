    #include<stdio.h>
    int main()
    {
      int a;
      long long int b;
      char c;
      float d;
      double v;
      scanf("%d %lld %c %f %lf" , &a, &b, &c, &d, &v);
      printf("%d\n%lld\n%c\n%.2f\n%.5lf\n",a,b,c,d,v);
        return 0;
    }