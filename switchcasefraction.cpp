#include <iostream>
#include <IOMANIP>
#include <cmath>
#include <ctype.h>
using namespace std;
    int a,b,c,d;
int main()
{
    int op;
    cout<<"Fractional : \n";
    cout<<"1.Addition\n2.Subtraction \n3.Multiplication"<<endl;
    cin>>op;
    switch(op){

case 1:
       {

        cout<<"enter fractions(a/b)"<<endl;
        cin>>a;cout<<"/\n";cin>>b;
        cout<<"enter fractions(c/d)"<<endl;
        cin>>c;cout<<"/\n";cin>>d;
        cout<<"Sum = "<<(a*d)+(c*b)<<"/"<<b*d<<endl;
       }break;
case 2:
       {

        cout<<"enter fractions(a/b)"<<endl;
        cin>>a;cout<<"/\n";cin>>b;
        cout<<"enter fractions(c/d)"<<endl;
        cin>>c;cout<<"/\n";cin>>d;
        cout<<"Sum = "<<(a*d)-(c*b)<<"/"<<b*d<<endl;       }break;

case 3:
       {

        cout<<"enter fractions(a/b)"<<endl;
        cin>>a;cout<<"/\n";cin>>b;
        cout<<"enter fractions(c/d)"<<endl;
        cin>>c;cout<<"/\n";cin>>d;
        cout<<"Sum = "<<(a*c)<<"/"<<(b*d)<<endl;
       }break;
default :
    {
        cout<<"Enter Valid Operation\n";
        exit(0);
    }
               }
return 0;
}
