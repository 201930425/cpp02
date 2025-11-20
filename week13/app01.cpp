#include <iostream>
using namespace std;

template <typename T>
T bigger(T first, T second)
{
	if (first > second) {
		return first;
	}
	return second;
}
int main()
{
	int i1 = 11;
	double d1 = 11.97;
	//cout << bigger(i1, d1) << endl;
	cout << bigger<double>(i1, d1) << endl; //명시적 호출
	cout << bigger<double>(55.7, 11.9) << endl;
	cout << bigger(55.7, 11.9) << endl;
	cout << bigger<string>("Hxllo", "Hi") << endl;
	return 0;
}