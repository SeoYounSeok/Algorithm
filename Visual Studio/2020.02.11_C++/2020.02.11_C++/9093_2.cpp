#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	// ũ��� ������ ����
	int size, val;
	int maxval, minval;
	cin >> size;
	cin >> val;
	
	maxval = minval = val;

	for (int i = 1; i<size; i++) {
		cin >> val;
		maxval = max(maxval, val);
		minval = min(maxval, val);
	}

	cout << "max �� : " << maxval << endl;
	cout << "min �� : " << minval << endl;
	return 0;

}