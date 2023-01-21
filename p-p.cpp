#include  <iostream>
using namespace std;
int main()
{
    int   a=20;
    int   *p,**q;

    p=&a;
    q=&p;
    cout<<*p<<endl<<**q<<endl;
}
