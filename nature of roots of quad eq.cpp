#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,r1,r2;
    cout<<"enter a,b and c "<<endl;
    cin>>a>>b>>c;
    d=b*b-(4*a*c);
    if(d==0)
    {
        cout<<"roots are real and equal"<<endl;
        cout<<(-b/(2*a));

    }
    else if(d>0)
    {
        cout<<"roots are real and unequal"<<endl;
        cout<<(-b+sqrt(d))/(2*a)<<endl;
        cout<<(-b-sqrt(d))/(2*a)<<endl;
    }

    else
        {
            cout<<"imaginary roots"<<endl;
        }

    return 0;

}
