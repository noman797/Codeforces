/*#include<stdio.h>
int main()
{
   int num1,num2,temp;
   scanf("%d %d",&num1,&num2);

   if(num1<num2)
   {
    temp=num1;                //The Euclidean Algorithm
    num1=num2;
    num2=temp;
   }
    
    while(num2!=0)
    {
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }

    printf("%d\n",num1);

    return 0;
}*/

#include<stdio.h>
int main()
{

     int num1,num2;
     scanf("%d %d",&num1,&num2);
     int min=num1;
     if(num2<num1)
     {
        min=num2;
     }
     int i;
     int gcd=1;
     for(i=1;i<=min;i++)
     {
        if(num1%i==0 && num2%i==0)            //Normal Process
        {
        gcd=i;
        }
     }
     printf("%d\n",gcd);





    return 0;
}