#include<iostream>
using namespace std;
class employee
{
    private:
    int num;
    float comp;
     public:
    employee()
    {
        cout<<"Enter Employee num : ";
        cin>>num;
        cout<<"Enter Employee compensation : ";
        cin>>comp;
    }
   void display()
   {
       cout<<"Employee Number : "<<num<<endl;
       cout<<"Employee Compensation : "<<comp<<endl;

   }
};
int main()
{
employee a,b,c;
a.display();
b.display();
c.display();





return 0;
}
