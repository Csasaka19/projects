#include <stdio.h>

int main()
{
    float Totalsalary, commission, profit; 
    int handset, basic = 50000;

    printf("How many handsets were sold this month? ");
    scanf("%d", &handset);

    commission = 0.03 * 50000;
    printf("Your total commission this month is %.4f\n", commission);

   profit = handset * (commission + 300);
   printf("Your total profit of sales this month is %.4f\n", profit);

    Totalsalary = profit + basic ;
    printf("Your total salary this month is %.4f", Totalsalary);

    return 0;
}