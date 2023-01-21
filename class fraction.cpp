#include<iostream>
using namespace std;
class fraction
{
    private:
    int num,den,frac;
public:
    fraction()
    {
        cout<<"Enter in p/q form"<<endl;
        cin>>num;
        cout<<"/"<<endl;
        cin>>den;
        cout<<num<<"/"<<den<<endl;
    }
    void add()
    {
        cout<<num+den;

    }
};
int main()
{

fraction a;
a.add();




return 0;
}
