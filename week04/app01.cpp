#include <iostream>
#include <string>
#include "pikachu.h"
using namespace std;


int main()
{
	Pokemon* pokemon;
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;

	pokemon = new Pikachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}