#include<iostream>
using namespace std;

class Complex{
	int real, imaginary;
	public:
		void setData(int real, int imaginary){
			this->real = real;
			this->imaginary = imaginary;
		}
		Complex getAddition(Complex &, Complex &);
		int getReal(){
			return real;
		}
		int getImg(){
			return imaginary;
		}
};

Complex Complex::getAddition(Complex &c1, Complex &c2){
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imaginary = c1.imaginary + c2.imaginary;
	return temp;
}

int main()
{
	Complex c1, c2, sum;
	c1.setData(2, 5);
	c2.setData(6, 7);
	sum = sum.getAddition(c1, c2);
	cout<<"Sum : "<<endl;
	cout<<"Real = "<<sum.getReal()<<endl;
	cout<<"Imaginary = "<<sum.getImg()<<endl;
}
