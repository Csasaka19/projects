#include <stdio.h>

int main()
{
    int i,k,rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    
    for(i = 0; i<=rows; i++)
    {
        for(k = 0; k<=i; k++)
        {
            printf("@");
        }
        printf("\n");
    }
    return 0;
}