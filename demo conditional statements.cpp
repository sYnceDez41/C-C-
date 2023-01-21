#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"enter two numbers : "<<endl;
    cin>>a>>b;

    if(b==0)
        {
        cout<<"division can't be done coz one of the values is zero";

    }
    else
        {
        c=a/b;
        cout<<c<<endl;

    }
    return 0;
}
