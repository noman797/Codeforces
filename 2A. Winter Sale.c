    #include<stdio.h>
    #include<math.h>
    int main()
    {
     
      float x,p;
      scanf("%f %f", &x,&p);
      float price = ((p)/(1-(x/100)));
      printf("%.2f\n",price);
        return 0;
    }