#include<iostream>
using namespace std;

class ClassA
{
  public:
    int a;
};

class ClassB :  public ClassA
{
  public:
    int b;
};

class ClassC :  public ClassA
{
  public:
    int c;
};

class ClassD : public ClassB, public ClassC
{
  public:
    int d;
};

int main()
{
    ClassD obj;

    obj.ClassB::a = 10;       // Statement 3
    obj.ClassC::a = 100;      // Statement 4

    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout << "\n a in Class B : " << obj.ClassB::a;
    cout << "\n a  in Class C : " << obj.ClassC::a;
    cout << "\n b : " << obj.b;
    cout << "\n c : " << obj.c;
    cout << "\n d : " << obj.d << '\n';
}
