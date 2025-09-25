#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	void makeSound() { cout << "cry~~\n"; }
};
class Dog : public Animal {
public:
	void makeSound() { cout << "bow~wow~\n"; }
};
class Cat : public Animal {
public:
	void makeSound() { cout << "meow~~\n"; }
};

int main()
{
	Animal a;
	Dog d;
	cout << typeid(d).name() << endl;
	d.makeSound();
	return 0;
}