#include<iostream>
using namespace std;
class copytest
{
public:
    int x;
public:
    copytest(int a)
    {
        x=a;
    }
    copytest(copytest &O)
    {
        x=O.x;
    }
};
int main()
{
copytest ob1(10);
copytest ob2(ob1);
cout<<ob1.x;




return 0;
}
