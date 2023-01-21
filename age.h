#include<datetimeapi.h>
#define current_year 2022
using namespace std;

int age(int year)
{

if(year<current_year)
    cout<<"you are "<<current_year-year<<" years old"<<endl;
    else if(year==current_year)
        cout<<"You born this year"<<endl;
    else if(year>current_year)
    {
        cout<<"Invalid Year"<<endl;
    }
}
