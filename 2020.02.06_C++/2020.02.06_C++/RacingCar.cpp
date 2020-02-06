#include <iostream>
#include <cstring>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

typedef struct {
	char gameID[ID_LEN]; // ���̵�
	int fuelGague; // ����
	int curSpeed; // �ӵ�
}Car;


void ShowCarState(const Car &car) {
	cout << "������ID: " << car.gameID << endl;
	cout << "���ᷮ: " << car.fuelGague << endl;
	cout << "����ӵ�: " << car.curSpeed << endl;

}

void Accel(Car &car) {
	if (car.fuelGague < 0)
		return;
	else
		car.fuelGague -= FUEL_STEP;

}

void Break(Car &car) {
	if (car.curSpeed == 0)
		car.curSpeed = 0;
	else
		car.curSpeed -= FUEL_STEP;
}

int main(void) {

	Car run99 = { "run99", 100, 0 };
	Accel(run99);
	Break(run99);
	ShowCarState(run99);
	return 0;

}