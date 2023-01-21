#include<iostream>
#define MAX 1000
using namespace std;
int main()
{
    int arr1[MAX][MAX],size[MAX];
    int n,q,s,pos1,pos2;

    cin>>n>>q;
    for(int i=0;i<n;i++)
    {

       cin>>s;
       for(int j=0;j<s;j++)
       {
            cin>>arr1[i][j];
       }

    }
    for(int i=0;i<q;i++)
    {

        cin>>pos1>>pos2;
        cout<<arr1[pos1][pos2]<<"\n";
    }
    return 0;
}
