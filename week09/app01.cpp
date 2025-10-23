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

		return Complex(r, i);
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

ostream& operator<<(ostream& o, Complex right) {
	o << right.getReal() << "+" << right.getsetImaginary() << "i";
	return o;
}


int main() {
	Complex c1;
	Complex	c2(10, 7);
	c1.setReal(5);
	c1.setImaginary(3);

	Complex c3 = c1 + c2; //Complex c3 = c1.operator+(c2);

	Complex c4 = c3++;

	//cout << c3.getReal() << "+" << c3.getsetImaginary() << "i" << endl;
	//cout << c4.getReal() << "+" << c4.getsetImaginary() << "i" << endl;

	cout << c3 << endl;
	cout << c4 << endl;
	return 0;
}