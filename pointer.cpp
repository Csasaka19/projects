#include <iostream>
using namespace std;

int main() {
    
    int var=5;
    int *pointVar;
 pointVar=&var;
 cout<<"var="<<var<<endl;
 cout<<"Address of var(&var)="<<&var<<endl;
 cout<<"pointVar="<<pointVar<<endl;
  cout<<"The content of the  address pointed to by point (*pointVar)="<<pointVar<<endl;
    return 0;
}
