#include<iostream>
#include<cmath>


using namespace std;
int main()
{
int c=0,guess,secretnum=6;
//cout<<"Guess 3 times only(1-10)"<<endl;
while(secretnum!=guess)
{
    cin>>guess;
    if(guess==secretnum)
    cout<<"you won!"<<endl;
    else
         cout<<"you lose!"<<endl;
c++;
if(c==3){

    break;
}
}



return 0;
}
