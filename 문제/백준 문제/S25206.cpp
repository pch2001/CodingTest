#include<iostream>
#include<sstream>
#include<string>
#include <map>
#include<iomanip>

using namespace std;

int main() {
	string subject;
	float score = 0;
	float count = 0;

	map<string, float> gradeMap = {
		{"A+", 4.5}, {"A0", 4.0},
		{"B+", 3.5}, {"B0", 3.0},
		{"C+", 2.5}, {"C0", 2.0},
		{"D+", 1.5}, {"D0", 1.0},
		{"F", 0.0}
	};


	for (int i = 0; i < 20; i++) {
		getline(cin, subject);
		stringstream a(subject);
		
		string first, third;
		float second;
		a >> first >> second >> third;
		if (third == "P") {
			continue;
		}
		count += second;
		score += second * gradeMap[third];

	}
	cout << fixed << setprecision(6) << score/count;

}