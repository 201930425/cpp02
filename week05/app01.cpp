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
	cout << pa << endl;

	//Cat* pc = (Cat*)pa; //Dangerous begavior!!!
	//Cat* pc = dynamic_cast<Cat*>(pa); //SAFE. �����Ŭ������ �����Ͱ� ������Ŭ������ ���� �����ּҸ� ���� �� ����( NULL �� ����) 
	Dog* pc = dynamic_cast<Dog*>(pa); // ���� �Ҵ�� ������Ŭ���� ��ü�� �޸� ���� �ּҸ� �޴´�
	cout << pc << endl;
	pc->makeSound();
	
	delete pc;
	pc = nullptr;

	////Dog* pd = (Dog*)pa; //downcasting, oldstyle (C style)
	//Dog* pd = dynamic_cast<Dog*>(pa); //downcasting, modern style (C++11)
	//pd->makeSound();

	

	return 0;
}

//git reset --hardHead~������Ŀ�԰���