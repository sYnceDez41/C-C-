#include <iostream>
#include <IOMANIP>
#include <cmath>
using namespace std;
int gal;
int cuft;
int main()
{
    int op;
    cout<<"1 : Galoons to CubicFEET"<<endl;
    cout<<"2 : CubicFEET to Galoons"<<endl;
    cin>>op;
  switch (op){

  case 1 :
  {


  cout<<"Enter in galoons"<<endl;;
  cin>>gal;
  cout<<gal<<"galoons"<<" = "<<gal*0.133681<<" cubic feet"<<endl;

  }
break;
  case 2:

{

  cout<<"Enter in Cubic feet";
  cin>>cuft;
  cout<<cuft<<"Cubic Feet"<<" = "<<cuft*7.48052<<" Galoons"<<endl;
}    break;

    }
return 0;
}
