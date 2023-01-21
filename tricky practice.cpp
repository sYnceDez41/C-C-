#include <iostream>
#include <IOMANIP>
#include <cmath>
#include <ctype.h>
using namespace std;
int main()
{
    int pow=1; //power initially 1
int numb=1; //numb goes from 1 to ???
while( pow<10000 ) {
cout << setw(2) << numb; //display number
cout << setw(5) << pow << endl; //display fourth power
++numb; //get ready for next power
pow = numb*numb*numb*numb;}
cout << endl;//calculate fourth power
return 0;
}
