#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(string message, vector<vector<int>> spoiler_ranges) {
    int n = message.size();

    // 1. 각 위치가 스포 구간인지 표시
    vector<bool> isSpoiler(n, false);
    for (int i = 0; i < spoiler_ranges.size(); i++) {
        int s = spoiler_ranges[i][0];
        int e = spoiler_ranges[i][1];
        for (int j = s; j <= e; j++) {
            isSpoiler[j] = true;
        }
    }

    // 2. 단어 나누기
    vector<string> words;
    vector<int> startIdx;
    vector<int> endIdx;

    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && message[j] != ' ') j++;

        words.push_back(message.substr(i, j - i));
        startIdx.push_back(i);
        endIdx.push_back(j - 1);

        i = j + 1;
    }

    int w = words.size();

    // 3. 단어별 정보
    vector<bool> isSpoilerWord(w, false);
    vector<int> lastSpoilerPos(w, -1);

    for (int i = 0; i < w; i++) {
        for (int j = startIdx[i]; j <= endIdx[i]; j++) {
            if (isSpoiler[j]) {
                isSpoilerWord[i] = true;
                lastSpoilerPos[i] = j; // 마지막 스포 위치
            }
        }
    }

    // 4. 스포 밖에서 등장한 단어 저장
    unordered_set<string> normalSet;
    for (int i = 0; i < w; i++) {
        if (!isSpoilerWord[i]) {
            normalSet.insert(words[i]);
        }
    }

    // 5. 각 위치에서 "완전히 공개되는 단어" 기록
    vector<vector<int>> reveal(n);
    for (int i = 0; i < w; i++) {
        if (isSpoilerWord[i]) {
            reveal[lastSpoilerPos[i]].push_back(i);
        }
    }

    // 6. 왼쪽 → 오른쪽 진행
    unordered_set<string> used;
    int answer = 0;

    for (int i = 0; i < n; i++) {
        for (int idx : reveal[i]) {
            string word = words[idx];

            // 조건 체크
            if (normalSet.count(word)) continue;
            if (used.count(word)) continue;

            used.insert(word);
            answer++;
        }
    }

    return answer;
}

int main()
{
    vector<vector<int>> ranges = {{0, 3},{23, 28}};
    std::cout<<solution("here is muzi here is a secret message", ranges);
}