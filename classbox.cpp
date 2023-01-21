#include<bits/stdc++.h>

using namespace std;
using namespace std;
class Box
{
public:
int l,b,h;

public:
 Box():l(0),b(0),h(0){}

 Box(int l,int  b,int h)
 {
     this->l=l;
     this->b=b;
     this->h=h;
 }
Box(Box &ob)
{
l=ob.l;
b=ob.b;
h=ob.h;

}
int getLength()
{
    return l;
}

int getBreadth()
{
    return b;
}

int getheight()
{
    return h;
}
long long CalculateVolume()
{
    return (long long) l*b*h;
}
bool operator <(Box &B)
{

        if (l < B.l)
        {
            return true;
        }
        else if (l == B.l)
        {
            if (b < B.b)
            {
                return true;
            }
            else if (b == B.b)
            {
                if (h < B.h)
                {
                return true;
                }
            }
        }

        return false;
    }



};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
check2();
}
