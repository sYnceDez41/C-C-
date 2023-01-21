#include<iostream>
using namespace std;
int main()
{
/*int arr[4][4]={
                {2,0,0,0},
                {0,2,0,0},
                {0,0,2,0},
                {0,0,0,2}
              };
int arr2[4][4]= {
                {2,0,0,0},
                {0,2,0,0},
                {0,0,2,0},
                {0,0,0,2}
};
*/
int arr1[4][4];
int arr2[4][4];
int a=0,b=0;


cout<<"Enter Array 1"<<endl;

for(int i=0;i<4;i++)
{

    for(int j=0;j<4;j++)
    {
        cout<<"enter element : ";
        cin>>arr1[i][j];
    }
}
cout<<"Enter Array 2"<<endl;


for(int i=0;i<4;i++)
{

    for(int j=0;j<4;j++)
    {
        cout<<"enter element : ";
        cin>>arr2[i][j];
    }
}


for(int i=0;i<4;i++)
{

    for(int j=0;j<4;j++)
    {

        cout<<" "<<arr1[i][j]*arr2[i][j];
    }   cout<<endl;
}



return 0;
}
