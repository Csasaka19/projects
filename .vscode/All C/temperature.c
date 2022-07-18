#include <stdio.h>

int main()
{
    float farenheit, celcius;
    printf("Enter your temperature in Farenheit: ");
    scanf("%f", &farenheit);

    celcius = farenheit - 17.222;
    printf("Your temperature in degrees celcius is %.4f", celcius);

    return 0;
}