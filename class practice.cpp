#include<iostream>
using namespace std;
class part
{
    private:
    int modal_num;
    int part_num;
    int cost;
    public:
    part()
    {
        cout<<"enter Modal Number :"<<endl;
            cin>>modal_num;
        cout<<"enter part Number :"<<endl;
            cin>>part_num;
        cout<<"enter Cost :"<<endl;
            cin>>cost;    }
    void putdata()
    {
        cout<<"Modal Number : "<<modal_num<<endl;
        cout<<"Part Number : "<<part_num<<endl;
        cout<<"Cost : "<<cost<<endl;
    }
};
int main()
{
    part ob1,ob2;

    ob1.putdata();
    ob2.putdata();






return 0;
}
