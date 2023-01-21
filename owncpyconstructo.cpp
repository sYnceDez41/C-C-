#include <iostream>
#include <string.h>
using namespace std;
    char t[]=" Hello Dear!";

class GFG {
public:
    void print() { cout << t; }
    int ret(char s[])
    {
        return strlen(s);
    }
};

int main()
{
int a=ret(t[]);
    GFG G;
    for (int i = 0; i <= a+1); i++) {
        G.print();
        cout<<"\n";
    }
    return 0;
}
