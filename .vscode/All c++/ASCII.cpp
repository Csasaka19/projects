#include <iostream>

using namespace std;

int main()
{
    // American system for code information interchange
    // Every letter (uppercase,lowercase) has a unique number that enables the machine to understand 
    // A few symbols also have a unique letter
    char s1, s2, s3, s4, s5, s6;
    cout << "Enter your six letter word here: " << endl;
    cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6;

    cout << "The ASCII representation of your letters is:....";

    cout << int(s1) << " " << int(s2) << " " << int(s3) << " " << int(s4) << " " 
    << int(s5) << " " << int(s6) << " " << endl;


    cout << char(98) << char(86) << endl; // Changing ASCII number to a letter
    return 0;
}