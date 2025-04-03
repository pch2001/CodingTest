#include <iostream>
using namespace std;

int main() {
	int hour, min, time;

	cin >> hour >> min >> time;

	int h, m;
	m = time % 60;
	h = time / 60;

	hour += h;
	min += m;

	if (min >= 60) {
		hour++;
		min -= 60;
	}

	if (hour >= 24) {
		hour = hour-24;
	}

	cout << hour<<" " << min;
}