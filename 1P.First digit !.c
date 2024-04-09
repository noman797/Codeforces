    #include<stdio.h>
    int main()
    {
     
      int num;
      scanf("%d",&num);
      int first;
      first=num;
      while(first>=10)
      {
        first=first/10;
      }
      if(first%2==0)
        printf("EVEN");
        else
        printf("ODD");
     
        return 0;
    }