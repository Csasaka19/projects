#include <iostream>

using namespace std;

int main ()
{
    //Factorial 
    //for loop

    int num, i, factorial = 1;
    cout << "Enter number here: " << endl;
    cin >> num;

 for ( i = 1; i <= num; i++)
 {
    /* eg for 5 (1*2*3*4*5) */
    factorial *= i;
 }

 cout << "The factorial of " << num << " is  " << factorial;
/*
decrement also works assign i to the input number
 for ( i = num ; i <= 1; i--)
 {
    
    factorial *= i;
 }
 */
return 0;
}