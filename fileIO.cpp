#include<iostream>
#include<fstream>

using namespace std;
int main()
{
ofstream outfile("my.txt",ios::trunc);
outfile<<"Hello_myself_Daim."<<endl;
outfile<<"i_am_programmer_at_Microsoft";
outfile.close();

ifstream in;
in.open("my.txt");
if(!in)
    cout<<"file doesnt exist"<<endl;

string str1,str2;
in>>str1;
in>>str2;
cout<<str1;
cout<<endl<<str2;
if(EOF)
    cout<<"\nreached EOF"<<endl;




return 0;
}
