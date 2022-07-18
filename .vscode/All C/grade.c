#include <stdio.h>

int main()
{
int math, eng, bio, chem, grade;

printf("Your marks must be over 100 percent \n\n");

printf("Enter your marks for Mathematics: ");
scanf("%d", &math);
printf("Enter your marks for English: ");
scanf("%d", &eng);
printf("Enter your marks for Biology: ");
scanf("%d", &bio);
printf("Enter your marks for Chemistry: ");
scanf("%d", &chem);

grade = (math + eng + bio + chem)/4;

switch (grade/10) 
{
case 1:
case 2:
case 3:
printf("Your mark average is less than 40. \n");
printf("Grade: F");
break;

case 4:
case 5:
printf("Your marks average is between 40 and 59. \n");
printf("Grade: C");
break;

case 6:
case 7:
printf("Your marks average is between 60 and 79. \n");
 printf("Grade: B");
break;

case 8:
case 9:
case 10:
printf("Your marks average is above 80.You passed!! \n");
printf("Grade: A");
break;

default:
printf("Your Grade input is invalid");
    break;
}
return 0;
}