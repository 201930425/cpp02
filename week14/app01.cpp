#include "stack.cpp"

class Pokemon {
private:
	int hp;
	string name;
public:
	Pokemon(): hp(1),name("무명") {};
	Pokemon(int hp,string name) :hp(hp),name(name) {
		cout << name<<"포켓몬 생성됨\n"; 
	};
	//void attack() = 0;
	//virtual void attack() = 0;
};
//class Pikachu : public Pokemon {
//public:
//	Pikachu() {};
//	void attack() { "전기공격\n"; };
//};
//class Squirtle : public Pokemon {
//public:
//	Squirtle() {};
//	void attack() { "anfeovh공격\n"; };
//};
int main()
{
	//Pokemon p1; // 추상클래스의 인스턴스
	//Pokemon *pikachu = new Pikachu(); // upcasting
	//Pikachu p1;
	//Squirtle s1;
	Pokemon pikachu;
	Pokemon squirtle(100,"꼬부기");

  Stack<int> stacki(10);
  Stack<Pokemon> stackp(3);
  Stack<double> stackd(3);
  stackp.push(pikachu);
  stackp.push(squirtle);
  stacki.push(5);
  stacki.push(6);
  stacki.push(7);
  stacki.push(3);
  cout << stacki.pop() << endl;
  cout << stacki.pop() << endl;
  cout << stackd.pop() << endl; // stack is empty!
  cout << stackp.pop() << endl;
  return 0;
}