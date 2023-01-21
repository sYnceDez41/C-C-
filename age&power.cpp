#include<iostream>
#include<IOMANIP>
#include"maths.h"
#include"age.h"
using namespace std;
int main()
{
    int s;
    again:
    cout<<setw(12)<<endl<<endl<<"Menu"<<endl;
    cout<<"1.Power of any Number"<<endl<<"2.Age Calculator"<<endl<<"3.Exit"<<endl;
    cin>>s;
    switch(s)
    {
 case 1:
        {int Base,Exponent;
    cout<<"Enter Base"<<endl;
    cin>>Base;
    cout<<"Enter Exponent"<<endl;
    cin>>Exponent;
    cout<<Base <<"^"<<Exponent<<" is "<<power(Base,Exponent);
        goto again;
        }
case 2:
    {int x;
    cout<<"Enter Birth year"<<endl;
    cin>>x;
        age(x);
goto again;

    }break;

default:
 {
if(s==3){
    cout<<"program ending......";
 exit(1);
}
 else
 {
     cout<<"Enter Valid Operation"<<endl;
     goto again;
 }
 }}



return 0;
}
