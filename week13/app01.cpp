#include <iostream>
using namespace std;

template <typename T>
void exchange(T* first, T* second)
{
	T temp = *first;
	*first = *second;
	*second = temp;
}

int main()
{
	int i1 = 11;
	int i2 = 76;
	exchange(&i1, &i2);
	cout << "swap(11, 76) = ";
	cout << i1 << "  " << i2 << endl;

	double d1 = 51.5;
	double d2 = 42.7;
	exchange(&d1, &d2);
	cout << "swap(51.5, 42.7) = ";
	cout << d1 << "  " << d2 << endl;
	return 0;
}