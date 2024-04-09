    #include<stdio.h>
     
    int main() {
     
        int a, b;
        char s;
        scanf("%d %c %d", &a, &s, &b);
     
        if (s == '>') {  // Checking the character to determine the comparison operation
            if (a > b) {
                printf("Right");
            } else {
                printf("Wrong");
            }
        } if (s == '<') {
            if (a < b) {
                printf("Right");
            } else {
                printf("Wrong");
            }
        } 
        if (s == '=') {
            if (a == b) {
                printf("Right");
            } else {
                printf("Wrong");
            }
        } 
     
        return 0;
    }