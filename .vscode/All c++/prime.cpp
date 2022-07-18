#include <iostream>

using namespace std;

//Functions ,parameters and arguments
int prime_number(int numeral = 0, int k = 2)
{
// This function tests whether a number is prime
// a prime number is divisible by only itself and 1

bool isPrimeFlag = true;
for (k = 2; k < numeral ; k++)
{
   if(numeral % k == 0)
   {
    isPrimeFlag = false;
    break;
   }
}
 if (isPrimeFlag)
 {
   cout << "This is a prime number: " << numeral << endl;
 }
 else
 {
    cout << "This is a non prime number" << endl;
 }
 
 return 0;

}

bool prime(int numeral, int k = 2) // simplified function
{
    for (k = 2; k < numeral ; k++)
{
   if(numeral % k == 0)
   return false; 
}
return true;
}

int main(int i = 0, int counter = 0)
{
   prime_number(7);
   
   cout << endl;
   cout << endl;
    for (i = 1; i < 1000; i++) //checks prime numbers btw 1 - 1000
    {
       bool istrue = prime(i);
       if(istrue)
         cout << "This is is a prime number: " << i << endl;
         counter++;
    }
    cout << "The number of prime numbers is: " << counter;
return 0;
}