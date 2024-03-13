#include<stdio.h>
#define PI 3.14 
int main()
{
    float rad = 5.0;
    printf("%f is area",PI*rad*rad);
    #undef PI;
    printf("%f is perimeter",2*PI*rad); //Here we will get an error because PI is undefined in above line
}