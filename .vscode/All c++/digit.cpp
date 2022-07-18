#include <iostream>

using namespace std;

int main()
{
    // does not handle very large numbers due to the int capacity 
    // only ten digits max :(
    int numeral;
    cout << "Enter the desired numeral to be checked" << endl;
    cin >> numeral;

    if (numeral == 0)
    {
       cout << "Try again!!" << endl;
    }
    else
    {
        if (numeral < 0)
    {
        numeral *= -1;
        //deals with negative digits
    }

        int counter = 0;
        while (numeral > 0)
        {
            numeral /= 10; /* divides the numeral by 10 truncating the decimal point till the numeral is 
            0 every time the numeral is divided the counter is incremented e.g 123  12.3...3 truncated
            counter 1  1.2 ...2 truncated counter 2  0.1... 1 truncated counter 3 and on the fourth 
            iteration of the loop since number is zero the loop exits*/
            counter++;
        }
        
        cout << "Your numeral contains " << counter << " digits" << endl;
        cout << "Thanks for your participation" << endl;
    }
    return 0;
}