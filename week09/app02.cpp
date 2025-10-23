#include <iostream>
#include <string>
using namespace std;

class Pokemon {
private:
	int level;
	string name;
public:
	Pokemon(const string& name, int level) : name(name), level(level) {}
		string getName() const {
			return name;
		}
		int getLevel() const {
			return level;
		}
		//member
	/*friend ostream& operator<<(ostream& o, const Pokemon pokemon) {
		o << pokemon.name << "(" << pokemon.level << ")" << endl;
		return o;
	}*/
};

ostream& operator<<(ostream& o, const Pokemon pokemon) {
	o << pokemon.getName() << "(" << pokemon.getLevel() << ")" << endl;
	return o;
}

int main() {
	Pokemon p1("Pikachu", 5);
	Pokemon p2("Squirtle", 3);

	cout << p1; // 포켓몬이름(레벨)
	cout << p2;

	return 0;
}