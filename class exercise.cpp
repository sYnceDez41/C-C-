#include<iostream>
using namespace std;
const void count(int&);
class tollbooth
{
    private:
    int cars;
    double money;
    public:
        tollbooth()
        {
            cars=0;
            money=0;
        }
    void payingCar()
    {
        cars++;
        money+=.50;
    }
    void nopayCar()
    {
        cars++;
    }
    void display()
    {
        cout<<cars<<endl;
        cout<<money<<endl;
    }
};
int main()
{
int a=0;
char c;
tollbooth ob;
again :
count(a);
if(a==1)
    ob.payingCar();
    else
    ob.nopayCar();
ob.display();
cout<<"you want to continue , press y/n"<<endl;
cin>>c;
if(c=='y')
    goto again;
else
exit(1);

return 0;
}
const void count(int& a)
    {
    cout<<"Enter 1 for paying and 0 for non paying cars"<<endl;
    cin>>a;
    }

