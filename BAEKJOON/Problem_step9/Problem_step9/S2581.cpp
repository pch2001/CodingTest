//#include<iostream>
//using namespace std;
//
//bool isprime(int num) {
//	if(num < 2) return false;
//	for(int i = 2; i * i <= num; i++) {
//		if(num % i == 0) return false;
//	}
//	return true;
//}
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//
//	int sum = 0;
//	int first_num = -1;
//	bool first_found = false;
//
//	for(int i = n; i <= m; i++) {
//		if(isprime(i)) {
//			//cout << i << " ";
//			sum += i;
//			if(!first_found) {
//				//cout << i << " ";
//				first_num = i;
//				first_found = true;
//			}
//		}
//	}
//	if (first_found)
//		cout << sum<<endl << first_num;
//	else
//		cout << -1;
//
//
//}