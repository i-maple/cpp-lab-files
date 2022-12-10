//WAP to demonstrate accessing private members using friend function

#include<iostream>
using namespace std;

class Demo{
	int len, bre;
	
	public:
		void setData(int len, int bre){
			this->len = len;
			this->bre = bre;
		}
		friend void area(Demo);
};

void area(Demo d1){
		cout<<"Area = "<<d1.len*d1.bre;
}

int main(){
	int len, bre;
	Demo d;
	cout<<"Enter length and breadth"<<endl;
	cin>>len>>bre;
	d.setData(len, bre);
	area(d);
}
