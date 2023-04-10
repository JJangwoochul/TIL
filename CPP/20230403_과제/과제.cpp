//20230328_cpp과제 Car클래스 실습 2061052 컴퓨터공학과 장우철//
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	//멤버변수 선언
	int speed;			//속도
	int seat;			//좌석
	string gear;		//기어
	string color;		//차 색상
	void speedUp();
	void speedDown();
};
		//멤버함수 선언
void Car::speedUp() {	//속도증가멤버함수
	speed += 10;
	cout << "최고속도:" << speed << endl;
}

void Car::speedDown() {	//속도감소멤버함수
	speed -= 10;
	cout << "현재속도:" << speed << endl;
}

int main() 
{
	Car myCar;	//첫번째 객체

	cout << "현재 내 차" << "\n";

	myCar.speed = 100;

	myCar.gear = "D";
	cout << "기어는:" << myCar.gear << "\n";

	myCar.seat = 5;
	cout << myCar.seat << "인승" << "\n";

	myCar.color = "red";
	cout << "색상은:" << myCar.color << "\n";

	myCar.speedUp();
	myCar.speedDown();
	
	Car dreamCar;	//두번째 객체

	cout << "\n나의 드림카" << "\n";

	dreamCar.speed = 180;

	dreamCar.gear = "D";
	cout << "기어는:" << dreamCar.gear << "\n";

	dreamCar.seat = 2;
	cout << dreamCar.seat << "인승" << "\n";

	dreamCar.color = "black";
	cout << "색상은:" << dreamCar.color << "\n";

	dreamCar.speedUp();
	dreamCar.speedDown();

	return 0;
}