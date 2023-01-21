#include<iostream>
using namespace std;
int main()
{
int *p,**q,**r;
int a,b,c;
cout<<"Enter The Values Of A,B & C"<<endl;
cin>>a>>b>>c;
p=&a;
q=&p;
r=&q;
cout<<*p<<*q<<*r<<endl;

return 0;
}
