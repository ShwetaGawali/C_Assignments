#include<stdio.h>
 # define PI 3.14
 int main()
 {
     float rad, Area, Circumference;
     printf("Enter the radius \n");
     scanf("%f", &rad);
     Area = PI * rad * rad;
     Circumference = 2*PI*rad;

     printf("Area of circle is = %f\nCircumference of circle is = %f\n",Area,Circumference);
      
      return 0;
 }