#include <iostream>

using namespace std;

int main()
{
// Types of triangles 
float side1, side2, side3;

cout << "Please enter the sides of your tringle(side1, side2, side3)" << endl;
cin >> side1 >> side2 >> side3;

if(side1 == side2 && side2 == side3)
    cout << "Your input represents an equilateral triangle" << endl;
else
{
 if(side1 != side2 && side2 != side3 && side1 != side3)
 {
   cout << "This is a scalene triangle input(so irregular)" << endl;
 }
 else
{
 cout << "This is a isoscels triangle input" << endl;
}
}
cout << "What's the rush for just draw it instead of running it!!"; 
 
 return 0;
}