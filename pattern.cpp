#include<iostream>
using namespace std;
int main()
{
int row,col;
cout<<"Enter Row & Column"<<endl;
cin>>row;

for(int i=0;i<row;i++)
{
    for(int j=i;j<row;j++)
    {
        if(i==1 || i==2 || i==3 || i==4)
        cout<<endl;
        else if(j==1 || j==2 || j==3 || j==4)
            cout<<"*";
        else cout<<endl;
    }
    cout<<endl;
}





return 0;
}
