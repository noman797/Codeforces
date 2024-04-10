#include<stdio.h>
#include<math.h>
int main()
{

  int p;
  int flag=1;
  scanf("%d",&p);
  for(int i=2;i<=p/2;i++)
  {
    if(p%i==0)
    {
       flag=0;
       break;
    }
  }
  if(flag)
  printf("YES");
  else
  printf("NO");


    return 0;
}