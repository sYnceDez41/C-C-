#include<iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int A[n];

   for(int i=0;i<n;i++){
   cin>>A[i];}

   cout<<n<<endl;
   for(int i=n-1;i>=0;i--)
   {cout<<A[i];
   }
    return 0;
}
