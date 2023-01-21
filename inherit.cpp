#include<iostream>
using namespace std;
class Vehicle {
  protected:
    Vehicle()
    {
      cout << "This is a Vehicle\n";
    }
};


class Car : private Vehicle {

};


int main()
{

    Car obj;
    return 0;
}
