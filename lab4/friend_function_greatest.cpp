#include<iostream>
using namespace std;

class Class2;
class Class1{
	int num;
	public:
		void setData(int num){
			this->num = num;
		}
		friend int getGreatestNumber(Class1, Class2);
};

class Class2{
	int num;
	public:
		void setData(int num){
			this->num = num;
		}
		friend int getGreatestNumber(Class1, Class2);
};

int getGreatestNumber(Class1 c1, Class2 c2){
	if(c1.num > c2.num){
		return c1.num;
	}
	return c2.num;
}

int main()
{
	Class1 c1;
	Class2 c2;
	c1.setData(5);
	c2.setData(6);
	int greatestNumber = getGreatestNumber(c1, c2);
	cout<<"The greatest number is = "<<greatestNumber;
}
