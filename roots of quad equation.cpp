#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c;
    float r0,r1;

    cout << "Enter a , b , c :  " ;

    cin >> a >> b >> c ;

    r0 = (-b+sqrt(b*b-4*a*c))/(2*a);
    r1 = (-b-sqrt(b*b-4*a*c))/(2*a);

    cout <<r0<<" "<<r1<<endl;

    return 0;



}
