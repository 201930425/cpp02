#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal { // abstract class
public:
	//void virtual makeSound() { cout << "cry~~\n"; }
	virtual void makeSound();
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
	//Animal animal;
	//animal.makeSound();
	Animal animal; //error

	return 0;
}