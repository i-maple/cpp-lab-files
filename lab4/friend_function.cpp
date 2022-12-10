#include<iostream>
using namespace std;

class Demo2;
class Demo1 {
	int number;
	public:
		void setData(){
			cout<<"Enter a number for Demo1 class object : ";
			cin>>number;
		}
		friend void getId(Demo1, Demo2);
};

class Demo2
{
	int number;
	public:
		void setData(){
			cout<<"Enter a number for Demo2 class object : ";
			cin>>number;
		}
		friend void getId(Demo1, Demo2);
};

void getId(Demo1 d1, Demo2 d2){
	int sum;
	sum = d1.number + d2.number;
	cout<<"The sum of private numbers of two classes is = " <<sum;
}

int main()
{
	Demo1 d1;
	Demo2 d2;
	d1.setData();
	d2.setData();
	getId(d1, d2);
}
