//#include <iostream>
//using namespace std;
//
//class Complex {
//private:
//	int real;
//	int imaginary;
//public:
//	Complex() : real(0), imaginary(0) {
//	}
//	Complex(int real, int Imaginary) : real(real), imaginary(Imaginary) {
//	}
//	void setReal(int real) {
//		//real = real;
//		this->real = real;
//	}
//	int getReal() const {
//		return real;
//	}
//	void setImaginary(int Imaginary) {
//		this->imaginary = Imaginary;
//	}
//	int getsetImaginary() const {
//		return imaginary;
//	}
//	/*Complex operator+(const Complex& right) {
//		int r = this->real + right.real;
//		int i = this->Imaginary + right.Imaginary;
//
//		return Complex(r, i);
//	}*/
//	Complex operator++(int) { //후위연산
//		Complex previous(this->real, this->imaginary);
//		this->real = this->real + 1;
//		return previous;
//	}
//	Complex operator++() { //전위연산
//		this->real++;
//		return Complex(this->real, this->imaginary);
//	}
//
//	friend ostream& operator<<(ostream& o, const Complex right) {
//		o << right.real << "+" << right.imaginary << "i";
//		return o;
//	}
//};
//Complex operator+(const Complex& left,const Complex& right) {
//	int r = left.getReal() + right.getReal();
//	int i = left.getsetImaginary() + right.getsetImaginary();
//
//	return Complex(r, i);
//}
//Complex operator+(const int left, const Complex& right) {
//	return Complex(left+right.getReal(),right.getsetImaginary());
//}
//
//istream& operator>>(istream& i, Complex& right) {
//	cout << "input real value :";
//	int real, imag;
//	i >> real;
//	right.setReal(real);
//	cout << "input imaginary value :";
//	i >> imag;
//	right.setImaginary(imag);
//
//	return i;
//}
//
//
//int main() {
//	Complex c1(10,7);
//	int x = 5;
//	cout << c1 << endl;
//	Complex c2 = (x + c1);
//	cout << c2 << endl;
//
//	return 0;
//}