#include <iostream>
using namespace std;

char path[5] = "";
void test2(int level) {
	if (level == 3) {
		//path[level] = '\0';   // 문자열 끝 표시
		cout << path << endl;
		return;
	}

	for(size_t i = 0; i < 3; i++) {
		path[level] = 'A' + i;
		test2(level + 1);
		path[level] = 0;
	}

}

int main() {
	test2(0);
	return 0;
}