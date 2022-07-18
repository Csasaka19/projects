#include <iostream>

using namespace std;

int main()
{
    //BMI - Basic mass index
    float BMI, height, mass;
    cout << "Please insert your mass in Kilograms: " << endl;
    cin >> mass;
    cout << "Please insert your height in metres: " << endl;
    cin >>  height;

    BMI = (mass/(height * height));

    cout << "Your BMI is " << BMI << endl;

    cout << " " << endl;

    if(BMI < 18.5)
    {
        cout << "You are underweight!! " << endl;
        cout << "Please eat a balanced diet,drink tons of water and exercise " << endl;
    }
    else if(BMI > 26)
    {
        cout << "You are obese!! " << endl;
        cout << "Please reduce junk diets and exercise regularly for better health " << endl;
    }
    else
    {
        cout << "Your wieght is in optimal condition " << endl;
        cout << "Keep up the good work!! " << endl;
    }

    
return 0;
}