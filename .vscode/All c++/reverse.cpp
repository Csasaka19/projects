#include <iostream>

using namespace std;

int main()
{
    // does not handle very large numbers due to the int capacity 
    // only ten digits max :(

    int numeral, reverse = 0;
    cout << "Input number to be reversed" << endl;
    cin >> numeral;

   while (numeral != 0)
   {
    reverse *= 10; 
    /* 123 the first iteration reversed = 0 so 0 remains the rem of 123 = 3 (0+ 3)is assigned
    to reverse then 12.3 since numeral is an int ..3 is truncated (2nd) reverse is 3 * 10 = 30 
    then remainder of 12 is 2 so 30 + 2 = 32 then 1.2 2 is truncated 32 * 10 = 320 rem of 1 is 1
     so 320 + 1 = 321 the numeral is reversed!! the loop stops as the numeral is now 0*/
    reverse += numeral % 10; // assigns the remainder to reversed
    numeral /= 10; // truncates till the number is 0
   }
   cout << "Your reversed numeral is: " << reverse << endl;
return 0;
}