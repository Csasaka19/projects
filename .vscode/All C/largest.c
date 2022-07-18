#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter the value of a >> ");
    scanf("%f", &a);
    printf("Enter the value of b >> ");
    scanf("%f", &b);
    printf("Enter the value of c >> ");
    scanf("%f", &c);

    if(a > b && b > c)
    {
        printf("%.2f is the greatest of the three numbers.", a);
    }
    if(b > a && a > c)
    {
        printf("%.2f is the greatest of the three numbers.", b);
    }
   else
   {
      printf("%.2f is the greatest of the three numbers.", c);   
   }

return 0;
}