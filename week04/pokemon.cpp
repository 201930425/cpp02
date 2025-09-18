#include "pokemon.h"

Pokemon::Pokemon()
{
	cout << "Default(Pokemon) constructor\n";
}

Pokemon::~Pokemon()
{
	cout << "Base Class (Pokemon) Destructor\n";
}

void Pokemon::attack() const
{
	cout << "Attack!" << endl;
}
