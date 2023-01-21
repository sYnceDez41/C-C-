#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter  n"<<endl;
    cin>>n;
    for(int i=1;i<=100;i++)
    {
            cout<<n*i<<" ";
            if(i==10 || i==20 || i==30 || i==40 || i==50 || i==60 || i==70 || i==80 || i==90 || i==100)
                cout<<endl;
        }
        cout<<endl;

}
