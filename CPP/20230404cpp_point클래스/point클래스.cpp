//20230404 5주차 Point class
#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();            //매개 변수 없는 생성자
	Point(int a, int b);   //매개 변수 있는 생성자
	void show()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}   //(x,y)
};

Point::Point() : Point(0, 0) {}   //위임 생성자
Point::Point(int a, int b)      //타겟 생성자
	:x(a), y(b) {}

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}