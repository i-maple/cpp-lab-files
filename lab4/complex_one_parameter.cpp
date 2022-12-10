#include<iostream>
using namespace std;

class Complex{
	int real, imaginary;
	public:
		void setData(int real, int imaginary){
			this->real = real;
			this->imaginary = imaginary;
		}
		void getAddition(Complex &);
		int getReal(){
			return real;
		}
		int getImg(){
			return imaginary;
		}
		void displayData(){
			cout<<"Sum : "<<endl;
			cout<<"Real = "<<real<<endl;
			cout<<"Imaginary = "<<imaginary<<endl;
		}
};

void Complex::getAddition(Complex &c1){
	real += c1.real;
	imaginary += c1.imaginary;
}

int main()
{
	Complex c1, c2;
	c1.setData(2, 5);
	c2.setData(6, 7);
	c1.getAddition(c2);
	c1.displayData();
}
