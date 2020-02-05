#include <iostream>
#include <cstring>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FULL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

typedef struct {
	char gameID[ID_LEN]; // 아이디
	int fuelGague; // 연료
	int curSpeed; // 속도
}Car;

void ShowCarState() {

}


int main(void) {
	cout << "hello" << endl;

}