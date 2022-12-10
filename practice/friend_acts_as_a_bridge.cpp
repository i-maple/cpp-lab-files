// Wap to demonstrate that friend function acts as a bridge between two class
#include<iostream>
using namespace std;

class Second;

class First{
	int fn;
	public:
		void setData(int fn)
		{
			this->fn = fn;
		}
		friend int sum(First, Second);
};

class Second
{
	int sn;
	public:
		void setData(int sn){
		this->sn = sn;
	}
	friend int sum(First, Second);
};

int sum(First f, Second s){
	return (f.fn + s.sn);
}

int main()
{
	First f;
	Second s;
	f.setData(2);
	s.setData(4);
	cout<<"Sum = "<<sum(f, s);
}
