    #include<stdio.h>
    int main()
    {
     
       float n;
       scanf("%f",&n);
     
       int intPart = (int)n;
     
       if(n==intPart)
       {
        printf("int %d\n",intPart);
       }
       else{
        printf("float %d %.3f\n", intPart, n-intPart);
       }
     
     
        return 0;
    }