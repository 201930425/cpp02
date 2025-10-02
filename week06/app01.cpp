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
		//return Complex(r, this->Imaginary) //가능하나 수학적으로 문제가 됨
	}
	Complex operator++(int) { //후위연산
		Complex previous(this->real, this->Imaginary);
		this->real = this->real + 1;
		return previous;
	}
	Complex operator++() { //전위연산
		this->real++;
		return Complex(this->real, this->Imaginary);
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

	Complex c3 = c1 + c2; //Complex c3 = c1.operator+(c2);
	// cout << c3.getReal() << "+" << c3.getsetImaginary() << "i" << endl;
	
	/*Complex c4 = c3++;*/
	Complex c4 = ++c3;
	
	//cout << c3++; // real 값만 1증가
	cout << c3.getReal() << "+" << c3.getsetImaginary() << "i" << endl;
	cout << c4.getReal() << "+" << c4.getsetImaginary() << "i" << endl;

	return 0;
}