#include <iostream>
#include <conio.h> //for getche()
using namespace std;
int main()
{
char dir='a';
int x=0, y=0;
cout << "Find the Treasure\n";
cout << "Type Enter to quit\n";
while( dir != '\r' ) //until Enter is typed
{
cout << "\nYour location is " << x << ", " << y;
cout << "\nPress direction key (w, a, s, d): ";
dir = getche();
if( dir=='s')
y--;
else
if( dir=='w' )
y++;
else
if( dir=='d' )
x++;
else
if( dir=='a' )
x--;

if( x>5 && x<10 ) //if x west of 5 OR east of 15
cout << "\nBeware: dragons lurk here";
if( x==7 && y==11 ) //if x is 7 and y is 11
{
cout << "\nYou found the treasure!\n";
exit(0);
}
}
return 0;
}
