#include<iostream>
using namespace std;
int main()
{

    float a,b,c,d,e;
    float f,g,h,i,j;
    float billAmount,Discount=0.0;
    cout<<"Enter purchased Items"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>f;
    cin>>g;
    cin>>h;
    cin>>i;
    cin>>j;
    billAmount=a+b+c+d+e+f+g+h+i+j;

    cout<<"Item 1 = "<<a<<endl;
    cout<<"Item 2 = "<<b<<endl;
    cout<<"Item 3 = "<<c<<endl;
    cout<<"Item 4 = "<<d<<endl;
    cout<<"Item 5 = "<<e<<endl;
    cout<<"Item 6 = "<<f<<endl;
    cout<<"Item 7 = "<<g<<endl;
    cout<<"Item 8 = "<<h<<endl;
    cout<<"Item 9 = "<<i<<endl;
    cout<<"Item 10 = "<<j<<endl;



    if(billAmount>500)
    {
        cout<<"BillAmount is "<<billAmount<<endl;
        Discount=billAmount*11/100;
        cout<<"Discount is "<< Discount<<endl;
        cout<<"Discounted Amount is "<<billAmount-Discount;
    }

    else if(billAmount<=100 || billAmount<=500)
    {
        cout<<"BillAmount is "<<billAmount<<endl;
        Discount=billAmount*4/100;
        cout<<"Discount is "<<Discount<<endl;
        cout<<"Discounted Bill Amount is "<<billAmount-Discount<<endl;
    }

   /** else
    {
        cout<<"you don't have enough bill amount to get the discount"<<endl;
    }**/

return 0;



}


