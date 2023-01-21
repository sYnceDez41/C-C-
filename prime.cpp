#include <iostream>
using namespace std;
int main()
{
int n,count=0;
cout<<"Enter a no. ";
cin>>n;
for(int i=1;i<=n;i++)
{
if(n%i==0)
count++;
}
if(count==2)
cout<<"it's a Prime Number\n";
else cout<<"it's not a Prime Number\n";
return 0;
}
