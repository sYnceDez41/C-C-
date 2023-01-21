#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3,total;
    float avg;
    cout<<"Enter marks of m1,m2 and m3"<<endl;
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    avg=total/3.0;

    if(avg>75)
    {
        cout<<"your grade is A"<<endl;

    }
    else if(avg>=33 && avg<=75)
    {
        cout<<"your grade is B"<<endl;

    }
    else
    {
        cout<<"your grade is C , means u haven't qualified the exam"<<endl;

    }



}
