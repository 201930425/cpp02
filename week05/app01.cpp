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
	Animal* pa = new Animal();
	pa->makeSound();
	delete pa; //��ü ����
	pa = nullptr; //������ �ڸ� ����
	
	pa = new Dog();
	pa->makeSound();
	delete pa; 
	pa = nullptr;

	return 0;
}