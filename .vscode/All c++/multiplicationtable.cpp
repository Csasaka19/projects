#include <iostream>

using namespace std;

int main()
{
    int first, second;
    cout << "MULTIPLICATION TABLE" << endl;

    for(first = 1; first <= 10; first++)
    {
       for (second = 1; second <= 10 ; second++)
       {
        cout << first << " * " << second << " = " << first * second << endlx;
       }
        cout << endl;
        cout << "  " << endl;
    }
 return 0;
}