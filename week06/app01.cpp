#include <iostream>
using namespace std;

class Complex {
private:
	int real;
	int Imaginary;
public:
	Complex() : real(0), Imaginary(0) {
	}
	Complex(int real, int Imaginary) : real(real), Imaginary(Imaginary) {
	}
	//void setReal(int real) :real(real)
	void setReal(int real) {
		//real = real;
		this->real = real;
	}
	int getReal() const {
		return real;
	}
	void setImaginary(int Imaginary) {
		this->Imaginary = Imaginary;
	}
	int getsetImaginary() const {
		return Imaginary;
	}
	Complex operator+(const Complex& right) {
		int r = this->real + right.real;
		int i = this->Imaginary + right.Imaginary;
		
		return Complex(r,i);
	}
};


int main() {
	Complex c1;
	Complex	c2(10,7);
	c1.setReal(5);
	c1.setImaginary(3);
	c2.setReal(10);
	c2.setImaginary(7);
	cout << c1.getReal() << "+" << c1.getsetImaginary() << "i" << endl;
	cout << c2.getReal() << "+" << c2.getsetImaginary() << "i" << endl;

	Complex c3 = c1 + c2;
	cout << c3.getReal() << "+" << c3.getsetImaginary() << "i" << endl;
}