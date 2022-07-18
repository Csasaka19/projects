#include <stdio.h>

int main()
{
    //Modulus
    int number;
    printf("Enter your number here: ");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("This is an even number.");
    }
else
{
    printf("This is an odd number.");
}
  return 0;
}