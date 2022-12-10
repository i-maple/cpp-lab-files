#include<iostream>
using namespace std;

class Complex{
	int a, b;
	public:
		Complex(int a, int b){
			this->a = a;
			this->b = b;
		}
		static Complex sum(Complex c1, Complex c2){
			sum.a = c1.a + c2.a;
			sum.b = c1.b + c2.b;
		}	
		int real(){
			return real;
		}
		int imaginary(){
			return imaginary;
		}
};

int main()
{
	Complex c1 = Complex(12, 13);
	Complex c2 = Complex(2, 3);
	Complex sum = Complex::sum(c1, c2);
	cout<<"Sum = "<<sum.real()<<" and "<<sum.imaginary();
}
