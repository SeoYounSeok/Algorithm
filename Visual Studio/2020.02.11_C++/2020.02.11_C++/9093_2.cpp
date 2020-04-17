#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	// 크기와 값들을 받음
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

	cout << "max 값 : " << maxval << endl;
	cout << "min 값 : " << minval << endl;
	return 0;

}