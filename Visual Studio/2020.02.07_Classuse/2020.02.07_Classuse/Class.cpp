#include <iostream>
using namespace std;

class Calculator
{
private:
	int p_Add;
	int p_Min;
	int p_Mul;
	int p_Div;
public:
	void Init();
	double Add(double num1, double num2);
	double Min(double num1, double num2);
	double Mul(double num1, double num2);
	double Div(double num1, double num2);

};

// 초기화

void Calculator::Init() {
	p_Add = 0;
	p_Min = 0;
	p_Mul = 0;
	p_Div = 0;
}

// 클래스 내부 함수 정의

double Calculator::Add(double num1, double num2) {
	p_Add++;
	return num1 + num2;
	
}

double Calculator::Min(double num1, double num2) {
	p_Min++;
	return num1 - num2;
}

double Calculator::Mul(double num1, double num2) {
	p_Mul++;
	return num1 * num2;
}

double Calculator::Div(double num1, double num2) {
	p_Div++;
	return num1 / num2;
}


int main(void) {
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4" << cal.Add(3.2,2.4) << endl;
	cout << "3.2 - 2.4" << cal.Min(3.2, 2.4) << endl;
	cout << "3.2 * 2.4" << cal.Mul(3.2, 2.4) << endl;
	cout << "3.2 / 2.4" << cal.Div(3.2, 2.4) << endl;
	return 0;
}
