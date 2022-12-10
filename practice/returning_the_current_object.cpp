//create class Demo with one data member n for storing a number, setData for initializing a field, and a method Demo max[Demo] that return Demo object with maximum value between two Demo object. In main create two object of class Demo, set the value and t=find the maximum one

#include<iostream>
using namespace std;

class Demo
{
	int n;
	public:
		void setData(int n){
			this->n = n;
		}
		Demo max(Demo d){
			
			if(this->n>d.n){
				return *this;
			}
			else{
				return d;
			}
		}	
		void showData(){
			cout<<"Number = "<<n<<endl;
		}	
};

int main(){
	Demo d1, d2, d3;
	d1.setData(11);
	d2.setData(6);
	d3 = d1.max(d2);
	cout<<"First ";
	d1.showData();
	cout<<"Second ";
	d2.showData();
	cout<<"Maximum ";
	d3.showData();
}
