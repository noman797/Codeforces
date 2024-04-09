    #include<stdio.h>
    int main()
    {
        char x;
        scanf("%c",&x);
        if(x>='a' && x<='z' || x>='A' && x<='Z')
        {
            printf("ALPHA\n");
            if(x>='A' && x<='Z')
            {
                printf("IS CAPITAL\n");
            }
            else if(x>='a' && x<='z')
            {
                printf("IS SMALL\n");
            }
        }
        else
        {
            printf("IS DIGIT\n");
        }
     
        return 0;
    }