#include <iostream>
using namespace std;

char path2[5] = "";
int visited[5] = {};
void test2(int level) {
	if (level == 3) {
		cout << path2 << endl;
		return;
	}

	for (size_t i = 0; i < 3; i++) {

		if (visited[i] == 1) continue;
		
		visited[i] = 1;
		path2[level] = 'A' + i;
		test2(level + 1);
		path2[level] = 0;
		visited[i] = 0;
	}

}

int main() {
	test2(0);
	return 0;
}