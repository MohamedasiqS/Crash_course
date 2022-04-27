#include <stdio.h>
#define PI 3.14 //define PI value

/** Function to find area of circle **/
float area_of_circle (int rad)
{
    return (PI*rad*rad);
}

/** Function to find circumference of circle **/
float circumference_of_circle (int rad)
{
    return (2*PI*rad);
}

/** Function to display the result **/
void display (float (*fp)(int),int check)
{
    if (check == 1)
      printf("Area of Circle is %f\n ",fp(5));
    else
      printf("circumference ofcircle is %f\n ",fp(7));
}

int main (void)
{
    float (*area) (int) = area_of_circle; //function pointer declaration for area of circle
    float (*circum) (int) = circumference_of_circle; //function pointer declaration for circumference of circle
    
    display (area ,1);
    display (circum ,2);
    return 0;
}