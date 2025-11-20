#include <iostream>
using namespace std;

template <typename T>
void display(T value)
{
	cout << "Generic display :" << value << '\n';
}

template <>
void display<char>(char value)
{
	cout << "Specialized display for char :" << value << '\n';
}

template <>
void display<const char*>(const char* value)
{
	cout << "Specialized display for c style string :" << value << '\n';
}
int main()
{
	//Generic
	display(50);
	display(2.17);
	//Specialized
	display('2');
	display("2");
	display("Hi");
	
	return 0;
}