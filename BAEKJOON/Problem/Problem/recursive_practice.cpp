#include <iostream>
using namespace std;

char path2[5] = "";
void test2(int level) {
	if (level == 3) {
		//path[level] = '\0';   // ���ڿ� �� ǥ��
		cout << path2 << endl;
		return;
	}

	for(size_t i = 0; i < 3; i++) {
		path2[level] = 'A' + i;
		test2(level + 1);
		path2[level] = 0;
	}

}

int main() {
	test2(0);
	return 0;
}