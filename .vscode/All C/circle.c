#include <stdio.h>
#include <math.h>

int main()
{
    float diameter, radius, area;
    printf("Enter your diameter: ");
    scanf("%f", &diameter);
    if (diameter > 0)
    {
     radius = diameter / 2;
     area = radius * radius * M_PI;
     printf("The area of this circle is = %f", area);
    }
    else
    {
        printf("Please input a positive diameter!!Try again");
    }
return 0;
}