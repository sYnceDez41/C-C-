#include<iostream>
using namespace std;
int main()
{
int a,b;
again:
cout<<"Enter a & b"<<endl;
cin>>a>>b;
try
{
    if(b==0)
    throw 404;
    cout<<a/b;
}
catch(int c)
{
    cout<<"\nEnter a valid denominator" <<endl<<"Error "<<c<<endl;
    goto again;
}




return 0;
}
