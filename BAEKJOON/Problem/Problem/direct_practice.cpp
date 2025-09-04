//#include <iostream>
//using namespace std;
//
//char path[] = "";
//int visited[5] = {};
//int cnt = 0;
//void test(int level) {
//	if (level ==3) {
//		//cout << path << endl;
//		
//		//cout << cnt++ << " ";
//		cout << visited[0] << visited[1] << visited[2] << visited[3] << endl;
//		return;
//	}
//
//	for(size_t i = 0; i<4 ; i++) {
//		if (visited[i] == 1)
//			continue;
//		
//		visited[i] = 1;
//		path[level] = 'A' + i;
//		test(level + 1);
//		path[level] = 0;
//		visited[i] = 0;
//	}
//
//}
//
//
//int main() {
//	test(0);
//	return 0;
//}