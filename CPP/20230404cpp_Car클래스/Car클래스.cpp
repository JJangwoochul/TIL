//20230328_cpp���� CarŬ���� �ǽ� 2061052 ��ǻ�Ͱ��а� ���ö//
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    //������� ����
    int speed;         //�ӵ�
    int seat;         //�¼�
    string gear;      //���
    string color;      //�� ����
    void speedUp();     //�ӵ�����
    void speedDown();   //�ӵ�����
    Car();              //������

};
//����Լ� ����
void Car::speedUp() {   //�ӵ���������Լ�
    speed += 30;
    cout << "�ְ�ӵ�:" << speed << endl;
}

void Car::speedDown() {   //�ӵ����Ҹ���Լ�
    speed -= 10;
    cout << "����ӵ�:" << speed << endl;
}
Car::Car() {        //20230404 ������ �߰�,�Ű����� ���� ������

    speed = 50;
    seat = 5;
    gear = "P";
    color = "white";
    cout << endl;
}

int main()
{
    Car myCar;   //ù��° ��ü

    cout << "���� �� ��" << "\n";

    myCar.speed = 100;

    myCar.gear = "D";
    cout << "����:" << myCar.gear << "\n";

    myCar.seat = 5;
    cout << myCar.seat << "�ν�" << "\n";

    myCar.color = "red";
    cout << "������:" << myCar.color << "\n";

    myCar.speedUp();
    myCar.speedDown();

    Car dreamCar;   //�ι�° ��ü

    cout << "���� �帲ī" << "\n";

    dreamCar.speed = 180;

    dreamCar.gear = "D";
    cout << "����:" << dreamCar.gear << "\n";

    dreamCar.seat = 2;
    cout << dreamCar.seat << "�ν�" << "\n";

    dreamCar.color = "black";
    cout << "������:" << dreamCar.color << "\n";

    dreamCar.speedUp();
    dreamCar.speedDown();

    Car myCar2;     //����° ��ü
    cout << "����° ��\n";
    myCar2.speedUp();
    myCar2.speedDown();

    return 0;
}