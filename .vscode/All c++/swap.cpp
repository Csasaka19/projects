#include <iostream>

using namespace std;

int main()
{
    // using a third varible to swap values
    int a = 40, b = 20, temp = 0;

     cout << "Value of a is: " << a << endl;
     cout << "Value of b is: " << b << endl;
     cout << "Value of temp is: " << temp << endl;

     temp = a;
     a = b;
     b = temp;
     cout << "" << endl;

     cout << "Value of a after swap is: " << a << endl;
     cout << "Value of b after swap is: " << b << endl;
     cout << "Value of temp after swap is: " << temp << endl; // temp retains the value of a initially assigned

     //swapping without a third variable
    cout << "" << endl;
    int c = 45, d = 34;
    cout << "Value of c is: " << c << endl;
     cout << "Value of d is: " << d<< endl;

     c = c + d; // 79
     d = c - d; // 79 - 34
     c = c - d; // 79 - 45
    cout << "" << endl;
     cout << "Value of c after swapping is: " << c << endl;
     cout << "Value of d after swapping is: " << d << endl;

return 0;
}