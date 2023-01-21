#include<iostream>
using namespace std;
class person
{
public:
    int id;
    string name;
    float income;
    person(int id,string name,float income)
    {
        this->id=id;
        this->name=name;
        this->income=income;
    }
    person display()
    {
        cout<<id<<" ,"<<name<<" ,"<<income<<endl;
    }
    person show()
    {
        cout<<"Hello"<<endl;
    }
};
int main()
{
person p(101,"Daim",10299.4);
p.display().show();




return 0;
}
