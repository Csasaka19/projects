#include <iostream>

using namespace std;

int main()
{
    // Function showing sizes of different types of data types
    cout <<"The total size of an integer is: " << __SIZEOF_INT__ << " bytes" << endl; //sizeof(int) works too

    cout <<"The total size of a boolean is: " << sizeof(bool) << " bytes" << endl;

    cout <<"The total size of a float is: " << __SIZEOF_FLOAT__ << " bytes" << endl; //sizeof(float)

    cout <<"The total size of a character is: " << sizeof(char) << " bytes" << endl;

    cout <<"The total size of a double is: " << __SIZEOF_DOUBLE__ << " bytes" << endl; //sizeof(double)
    /*A double enables double the space to be obtained for a float*/

  //PS
    cout <<"The total size of  a pointer is: " << __SIZEOF_POINTER__ << " bytes" << endl;
    
    // 8 bits = 1 byte
    return 0;
}