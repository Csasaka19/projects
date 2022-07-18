#include <iostream>

using namespace std;

int main()
{
    int month , year;
    cout << "Enter the desired year" << endl;
    cin >> year;
    cout << "Enter the desired month of the year" << endl;
    cin >> month;

    switch (month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "This month has thirty days" << endl;
        cout << "Irregardless of the leap years" << endl;
        cout << "This year is: " << year << endl;
        break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "This month has thirty one days" << endl;
        cout << "Irregardless of the leap years" << endl;
        cout << "This year is: " << year << endl;
        break;

    case 2:
       if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
       {
        cout << "This is a leap year" << endl;
        cout << "This month has 29 days!" << endl;
        cout << "This year is: " << year << endl;
       }
       else
       {
        cout << "This is not a leap year" << endl;
        cout << "This month has 28 days" << endl;
        cout << "This year is: " << year << endl;
       }
       break;
       
    default:
    cout << "Please enter a valid month and year!!!!!!!!!!" << endl;
        break;
    }
    cout << " " << endl;
    cout << "Have a nice month and year ;)" << endl;

    return 0;
} 