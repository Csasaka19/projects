#include <iostream>

using namespace std; // Global level declaration

int main()
{
    float AnnualSalary, Monthlysalary;

    //Console input cin
    /*Console output cout*/
    
    cout << "Enter your yearly income please... "<< endl;
    cin >> AnnualSalary;

    Monthlysalary = AnnualSalary / 12;

    cout << "Your approximate monthly income is: " << Monthlysalary << endl;

    return 0;


}