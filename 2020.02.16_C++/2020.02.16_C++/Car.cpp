#include <iostream>
using namespace std;

class Car {

private: 
	int num;
	double gas;
public:
	Car();
	void setCar(int num, double gas);
	void show();

};

Car::Car() {
	num = 0;
	gas = 0.0;
	cout << "�ڵ����� ����� �����ϴ�." << endl;
}



