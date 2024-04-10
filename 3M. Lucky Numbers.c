#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int count= 0;
 
    for(int i=a;i<=b;i++)
    {
        int num =i;
        int isluck=1;
 
        while(num>0)
        {
          int d = num%10;
          if(d!=4 && d!=7)
          {
            isluck = 0 ;
            break;
          }
          num=num/10;
        }
        if(isluck)
        {
            printf("%d ",i);
            count = 1;
        }}
        if(count==0)
        {
            printf("-1");
        }
    
    
    return 0;
}