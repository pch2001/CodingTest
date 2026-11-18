// Solve1005.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int number, rule;

void findPath(vector<int>& buildtime, vector<pair<int, int>>& rules, int target) {
    vector<int> inDegree(number + 1, 0);
    vector<vector<int>> graph(number + 1);
    vector<int> dp(number + 1, 0);

    for (auto& rule : rules) {
        int X = rule.first, Y = rule.second;
        graph[X].push_back(Y);
        inDegree[Y]++;
    }

    queue<int> q;
    for (int i = 1; i <= number; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
            dp[i] = buildtime[i];
        }
    }

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int next : graph[cur]) {
            dp[next] = max(dp[next], dp[cur] + buildtime[next]);
            if (--inDegree[next] == 0) {
                q.push(next);
            }
        }
    }

    cout << dp[target] << "\n";
}

int main()
{
    ios::sync_with_stdio(false);//iostream(cin,cout)과 c의 stdio(scanf, prinf)를 동기화 해제하는 역할
    cin.tie(0);//출력버퍼 비우기
 
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {

		cin >> number >> rule;

		vector<int> buildtime(number+1);
		for (int i = 1; i <= number; i++) {
			cin >> buildtime[i];
		}

		vector<pair<int, int>> rules(rule);
		for (int i = 0; i < rule; i++) {
			int x, y;
			cin >> x >> y;
			rules[i] = { x,y };
				
		}
		int target;
		cin >> target;

		findPath(buildtime, rules, target);

	}
}
