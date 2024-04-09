    #include <stdio.h>
     
    int main() {
        int A, B, C;
        scanf("%d%d%d", &A, &B, &C);
        
        int min= A, max= A;
     
        if (B < min) 
        min = B;
     
        else if (B > max) 
        max= B;
     
        if (C < min) 
        min = C;
     
        else if (C > max) 
        max = C;
     
        printf("%d %d\n", min, max);
        return 0;
    }