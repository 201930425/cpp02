#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	void virtual makeSound() { cout << "cry~~\n"; }
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
	Animal* pa =  new Dog(); //upcasting
	pa->makeSound();

	Cat* pc = (Cat*)pa; //Dangerous begavior
	pc->makeSound();
	cout << pc << endl;
	delete pc;
	pc = nullptr;

	////Dog* pd = (Dog*)pa; //downcasting, oldstyle (C style)
	//Dog* pd = dynamic_cast<Dog*>(pa); //downcasting, modern style (C++11)
	//pd->makeSound();

	

	return 0;
}

//git reset --hardHead~삭제할커밋개수