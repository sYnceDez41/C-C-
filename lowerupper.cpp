#include <iostream>
#include <IOMANIP>
#include <cmath>
#include <ctype.h>
int islower(char);
using namespace std;
int main()
{
    char C;
    cout<<"Enter Character"<<endl;
    cin>>C;
    islower(C);
return 0;

}

int islower(char x)
{
    int n=1;
    if(x>='A' && x <= 'Z')
    {
        n=0;
    cout<<n<<endl;
            }
    else
    {
    cout<<n<<endl;

    }


}
