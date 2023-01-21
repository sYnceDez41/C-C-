#include <iostream>

using namespace std;

main()
{
    //TYPE_OF_VARIABLE nameOfVariable;
    //TYPE_OF_VARIABLE nameOfVariable1, nameOfVariable2, nameOfVariable3;

    int a = 40, b = 2, c = 20; // -2 billions to 2 billions , 4 bytes
    cout << "a : " << a <<" address: " << &a << endl;
    cout << "b : " << b <<" address: " << &b << endl;
    cout << "c : " << c <<" address: " << &c << endl;

    short t1 = 5;
    //-3278 to 32767, 2 bytes
    cout << t1 << endl;
    float t2 = 5.123; //4 bytes of memory , numbers that are up to 38 zeros
    double t3 = 5.123; // 8 bytes of memory, numbers that are up to 308 zeros
    cout << t2 << endl;
    cout << t2 << endl;

    char t4; //character
    t4 = 'a';
    cout << t4 << endl;

    string t5 = "hello world ;->"; //string is always inside quotations
    cout << t5 << endl;

    string x = " Oper";
    string y = "ators";
    string combinedStrings = x + y;
    cout << combinedStrings << endl;

    //boolean type -- TRUE or False , false is always 0 , everyother number is TRUE ,
    bool t6 = true;
    cout << t6 << endl;
    //for unsigned short int, 0 to 65525
    unsigned short  t7 = 3700;
    cout << t7 <<endl;


    const string NAMEOFGAME = "Conqueror of C++";
    cout << NAMEOFGAME << endl;


}
