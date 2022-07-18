#include <iostream>
#include <iomanip>

using namespace std;

int rectangle()
{
    //can also draw a square when height is similar to width

    int k, j, height, width;
    char symbol;
  
    cout << "Enter the desired symbol pattern: " << endl;
    cin >> symbol;

    cout << "Enter the desired height: " << endl;
    cin >> height;
    cout << "Enter the desired width: " << endl;
    cin >> width;

    for(k = 1; k <= height; k++)
    {
        for(j = 1; j <= width; j++)
        {
            cout << setw(2) << symbol ; //setw set width available in iomanip lib
        }
        cout << endl;
    }
    return 0;
}

int triangle()
{
    //Right angled triangle
    int k, j, number;
    char symbol;

    cout << "Enter the desired symbol pattern: " << endl;
    cin >> symbol;
     cout << "Enter the desired size of the triangle: " << endl;
    cin >> number;


    for(k = 1; k <= number; k++)
    {
        for(j = 1; j <= k; j++)
        {
            cout << setw(2) << symbol ; //setw set width available in iomanip lib
        }
        cout << endl;
    }
    return 0;
}

int reversed_triangle()
{
    //Right angled triangle
    int k, j, number;
    char symbol;

    cout << "Enter the desired symbol pattern: " << endl;
    cin >> symbol;
     cout << "Enter the desired size of the triangle: " << endl;
    cin >> number;


    for(k = number; k >= 1; k--)
    {
        for(j = 1 ; j <= k; j++)
        {
            cout << setw(2) << symbol ; //setw set width available in iomanip lib
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    reversed_triangle();
    cout << endl;
    cout << endl;
    triangle();
    cout << endl;
    cout << endl;
    rectangle();
}