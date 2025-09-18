#include "squirtle.h"

Squirtle::Squirtle()
{
	cout << "Default(Squirtle) constructor\n";
}

Squirtle::~Squirtle()
{
	cout << "Derived Class (Squirtle) Destructor\n";
}
void Squirtle::attack() const
{
	cout << "water Attack~" << endl;
}
