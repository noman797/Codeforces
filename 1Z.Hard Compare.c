    #include<stdio.h>
    int main(){
        int n1,n2,n3,n4;
        scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
        n1%=100;
        n2%=100;
        n3%=100;
        n4%=100;
        int t=n1*n2*n3*n4;
        printf("%02d",t%100);
        return 0;
    }