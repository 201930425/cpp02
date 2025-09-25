#include <iostream>
using namespace std;

class Person {
public:
	string name;
	//virtual void warn()=0;
};

class UndergraduateStudent:virtual public Person{
public:
	double gpa;
	void warn() { cout << "학사경고\n"; };
};
class DormitoryStudent :virtual public Person {
public:
	int roomNumber;
	void warn() { cout << "벌점부여\n"; };
};
class UndergraduateDormitoryStudent
	: public UndergraduateStudent, public DormitoryStudent {

};

int main() {
	UndergraduateDormitoryStudent uds;
	//uds.warn(); // 다중살속시 어느 부모의 warn함수를 호출할지 모호함
	uds.DormitoryStudent::warn();
	uds.gpa = 3.9;
	uds.roomNumber = 201;
	uds.name = "Kim"; //양쪽 부모 클래스가 할아버지 클래스를 상속받을때 virtual 키워드로 죽음의 다이아몬드 문제 해결
	cout << uds.name << "의 평점은 " << uds.gpa << "이고, 기숙사 방번호는 " << uds.roomNumber << "호 입니다" << endl;
	return 0;
}