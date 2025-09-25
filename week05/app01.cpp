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
	//Cat* pc = dynamic_cast<Cat*>(pa); //SAFE. 고양이클래스의 포인터가 강아지클래스의 에모리 번지주소를 받을 수 없다( NULL 값 리턴) 
	Dog* pc = dynamic_cast<Dog*>(pa); // 힙에 할당된 강아지클래스 객체의 메모리 번지 주소를 받는다
	cout << pc << endl;
	pc->makeSound();
	
	delete pc;
	pc = nullptr;

	////Dog* pd = (Dog*)pa; //downcasting, oldstyle (C style)
	//Dog* pd = dynamic_cast<Dog*>(pa); //downcasting, modern style (C++11)
	//pd->makeSound();

	

	return 0;
}

//git reset --hardHead~삭제할커밋개수