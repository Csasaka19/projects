#include <iostream>

using namespace std;

int main()
{
    int c, d;
    char operand;
    cout << "SIMPLE CALCULATOR" << endl;
    cout << " " << endl;

    cout << "Enter the value of c" << endl;
    cin >> c;
    cout << "Enter the value of d" << endl;
    cin >> d;
    cout << "Enter the value of your operator" << endl;
    cin >> operand;

    switch (operand)
    {
    case '+':
       cout << c << "" << operand << "" << d << endl;
        cout << "The result of adding the two numbers is: " << c + d << endl;
        break;
    
     case '-':
        cout << c << "" << operand << "" << d << endl;
        cout << "The difference of the two numbers is: " << c - d << endl;
        break;
    
     case '/':
        cout << c << "" << operand << "" << d << endl;
        cout << "The quotient of the two numbers is: " << c / d << endl;
        break;
    
     case '*':
        cout << c << "" << operand << "" << d << endl;
        cout << "The product of  the two numbers is: " << c * d << endl;
        break;
        
     case '%':
         cout << c << "" << operand << "" << d << endl;
        cout << "The modulus of the two numbers is: " << c % d << endl;
        break;
    
    
    default:
       cout << "You clearly don't understand this do you??";
        break;
    }

return 0;
}