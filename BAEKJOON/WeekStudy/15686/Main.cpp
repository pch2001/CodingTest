#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int N, M;
int map[52][52];

vector<pair<int, int>> house;
vector<pair<int, int>> chicken;

int answer = 1e9;

// 현재 선택된 치킨집으로 거리 계산
void calculate(vector<int>& selected)
{
    int total = 0;

    for (auto& h : house)
    {
        int dist = 1e9;

        for (int idx : selected)
        {
            auto& c = chicken[idx];
            int d = abs(h.first - c.first) + abs(h.second - c.second);
            dist = min(dist, d);
        }

        total += dist;
    }

    answer = min(answer, total);
}

// 치킨집 M개 선택 (조합)
void dfs(int idx, vector<int>& selected)
{
    if (selected.size() == M)
    {
        calculate(selected);
        return;
    }

    for (int i = idx; i < chicken.size(); i++)
    {
        selected.push_back(i);
        dfs(i + 1, selected);
        selected.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> map[i][j];

            if (map[i][j] == 1)
                house.push_back({ i, j });
            else if (map[i][j] == 2)
                chicken.push_back({ i, j });
        }
    }

    vector<int> selected;
    dfs(0, selected);

    cout << answer;
}