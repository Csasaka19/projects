#include <stdio.h>

int main()
{
    //Simple calculator
    char operand;
    double a, b;
    
    printf("Enter the desired operand(+, *, - ,/): ");
    scanf("%c",&operand);
    printf("Enter the desired value of a: ");
    scanf("%lf",&a);
    printf("Enter the desired value of b: ");
    scanf("%lf",&b);


    switch(operand)
    {
        case '+':
        printf("Addition is %.4lf+ %.4lf = %.4lf", a, b, a + b);
        break;
        
        case '/':
        printf("Addition is: %.4lf / %.4lf = %.4lf", a, b, a / b);
        break;

        case '*':
        printf("Product is: %.4lf * %.4lf = %.4lf", a, b,  a * b);
        break;

        case '-':
        printf("Difference is: %.4lf - %.4lf = %.4lf", a, b, a - b);
        break;

        
        default:
        printf("There is no such operand as the one you just entered,");
        printf("please try again!!!");



    }
    return 0;

}