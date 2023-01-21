#include <iostream>
using namespace std;
int main()
{
    int x,y,z,a,b,c;
    int avg,var;
    cout << "enter number of which you want the average :" ;
    cin >> x >> y >> z >> a >> b >> c;
    var = x+y+z+a+b+c;
    avg = var/6;
    cout << "average is " << avg;
    return 0;
}
