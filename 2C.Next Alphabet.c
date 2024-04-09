    #include<stdio.h>
    int main()
    {
     
       char  c;
       scanf("%c",&c);
       int asci = c;
       
       if(c=='z')
       {
         c='a';
       }
       else{
        c++;
       }
       printf("%c\n",c);
        return 0;
    }