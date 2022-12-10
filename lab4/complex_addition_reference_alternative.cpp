#include<iostream>
using namespace std;

class Complex{
	int real, imaginary;
	public:
		void setData(int real, int imaginary){
			this->real = real;
			this->imaginary = imaginary;
		}
		int displayResult(){
			cout<<"Sum : "<<endl;
			cout<<"Real = "<<real<<endl;
			cout<<"Imaginary = "<<imaginary<<endl;
		}
		Complex getAddition(Complex &, Complex &);
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
	int c1Real, c2Real, c1Img, c2Img;
	cout<<"Enter real and imaginary number for c1 : ";
	cin>>c1Real>>c1Img;
	cout<<"Enter real and imaginary number for c2 : ";
	cin>>c2Real>>c2Img;
	c1.setData(c1Real, c1Img);
	cout<<"Before Addition, c1 : "<<endl;
	cout<<"Real = "<< c1Real <<endl<<"Imaginary = "<<c1Img<<endl;
	c2.setData(c2Real, c2Img);
	cout<<"Before Addition, c2 : "<<endl;
	cout<<"Real = "<< c2Real <<endl<<"Imaginary = "<<c2Img<<endl;
	sum= sum.getAddition(c1, c2);
	sum.displayResult();
}
