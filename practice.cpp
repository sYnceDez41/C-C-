#include <bits/stdc++.h>

using namespace std;
class Geeks
{
    public:

    // function with 1 int parameter
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }

    // function with same name but 1 double parameter
    void func(double x)
    {
        cout << "value of x is " << x << endl;
    }

    // function with same name and 2 int parameters
    void func(int x, int y)
    {
        cout << "value of x and y is " << x << ", " << y << endl;
    }
};

int main() {

    Geeks obj1;
int n,s,t;
  float m;  // Which function is called will depend on the parameters passed
    // The first 'func' is called
    cout<<"enter n"<<endl;
    cin>>n;
    obj1.func(n);

    // The second 'func' is called
    cout<<"enter Double m"<<endl;
    cin>>m;

    obj1.func(m);

    cout<<"enter s & t "<<endl;
    cin>>s>>t;

    obj1.func(s,t);
    return 0;
}
