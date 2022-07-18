#include <iostream>

using namespace std;

int main()
{
    int actualpin = 3456, pin, attempt;

    //do while loop
    do
    {
        cout << "Enter your pin" << endl;
        cin >> pin;

        if(pin != actualpin)
        {
            attempt++;
        }
    } while (attempt <= 3 && pin != actualpin); 
    
    if(attempt <= 3)
    {
        cout << "Welcome......loading" << endl;
        cout << "Your phone is unlocked" << endl;
    }
    else
    {
        cout << "Wrong pin.." << endl;
        cout << "Wait 30 min to attempt again" << endl;
    }
    return 0;
}