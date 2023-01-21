#include<iostream>
using namespace std;
class ship
{
    private:
    int lat,lon;
    static int num;
    public:

    void location()
    {
        cout<<"Enter position in Latitude and Longitude"<<endl;
        cin>>lat>>lon;
        cout<<"Position : ("<<lat<<","<<lon<<")"<<endl;
    }
    void serialnum()
    {
        cout<<"Serial Number : "<<++num<<endl;
    }
};
int ship::num = 0;
int main()
{
    ship s1,s2,s3;
    s1.serialnum();
    s1.location();
    s2.serialnum();
    s2.location();
    s3.serialnum();
    s3.location();





return 0;
}
