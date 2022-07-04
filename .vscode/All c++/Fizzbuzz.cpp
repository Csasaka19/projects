#include <iostream>

using namespace std;

int main()
{
    //Simple divisibilty test
    int Testnumber;

    cout << "Enter the desired number you would like to be tested please: " << endl;

    cin >> Testnumber;

    if(Testnumber % 6 == 0)
    {
        cout << Testnumber << " is divisible by both 2 and 3" << endl;
    } 
    else if(Testnumber % 2 == 0)
    {
        cout << Testnumber << " is divisible by 2" << endl;
    }
    else if(Testnumber % 3 == 0)
    {
       cout << Testnumber << " is divisible by  3" << endl;
    }
    else 
    {
        cout << Testnumber << " is neither divisible by 2 or 3" << endl;
    }

    cout << "Thank you very much for your participation!!";

    return 0;
}