#include<iostream>
using namespace std;
int main()
{
int ffactor,velocity,diameter,length;
int cal,N;
cout<<"enter the no. of iterations"<<endl;
cin>>N;
for(int i=0;i<N;i++){
cout<<"Enter FFactor"<<endl;
cin>>ffactor;
cout<<"Enter Velocity"<<endl;
cin>>velocity;
cout<<"Enter diameter"<<endl;
cin>>diameter;
cout<<"Enter Length"<<endl;
cin>>length;
cal=4*(ffactor*length*(velocity*velocity))/(2*diameter);
cout<<"The calculated del(P) in N/m2 is "<<cal<<endl;
}




return 0;
}
