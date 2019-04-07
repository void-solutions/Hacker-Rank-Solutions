#include<bits/stdc++.h>
using namespace std;

//edit here
class Box {
private:
	long long l,b,h;
public:
	Box(){
		l=0;
		b=0;
		h=0;
	}
	Box(int a,int x,int c){
		l=a;
		b=x;
		h=c;
	}
	Box(Box &ex){
		l=ex.l;
		b=ex.b;
		h=ex.h;
	}
	int getLength(){ return l;}
	int getBreadth (){ return b;}
	int getHeight (){ return h;}
	long long CalculateVolume(){ return l*b*h;}
	bool operator<(Box& ex){
		if(l<ex.l)
		return true;
		if(b<ex.b && l==ex.l)
		return true;
		if(h<ex.h && l==ex.l && b==ex.b)
		return true;
		return false;
	}
	friend ostream &operator<<(ostream&,Box&);
};
ostream &operator<<(ostream& out,Box& ex){
	out <<ex.l<<" "<<ex.b<<" "<<ex.h;
	return out;
}
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

//do not edit here.
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
