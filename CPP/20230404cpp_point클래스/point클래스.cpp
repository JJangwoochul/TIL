//20230404 5���� Point class
#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();            //�Ű� ���� ���� ������
	Point(int a, int b);   //�Ű� ���� �ִ� ������
	void show()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}   //(x,y)
};

Point::Point() : Point(0, 0) {}   //���� ������
Point::Point(int a, int b)      //Ÿ�� ������
	:x(a), y(b) {}

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}