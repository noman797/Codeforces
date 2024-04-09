    #include<stdio.h>
    #include<math.h>
     
    int main() {
       double a, b;
       scanf("%lf %lf", &a, &b);
       double div = a / b;
     
       int floor_value = (int)div;
       int ceil_value = (int)ceil(div); // Use ceil function here
       int round_value;
       double fractional_part = div - floor_value; // Calculate fractional part
     
       if (fractional_part >= 0.5) {
          round_value = floor_value + 1;
       }
       else {
          round_value = floor_value;
       }
       printf("floor %.0lf / %.0lf = %d\n", a, b, floor_value);
       printf("ceil %.0lf / %.0lf = %d\n", a, b, ceil_value);
       printf("round %.0lf / %.0lf = %d\n", a, b, round_value);
       return 0;
    }