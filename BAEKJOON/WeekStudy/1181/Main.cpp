#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(const std::string& a, const std::string& b)
{
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    std::cin >> N;

    std::vector<std::string> words(N);

    for (int i = 0; i < N; i++)
    {
        std::cin >> words[i];
    }

    // 1. 정렬
    std::sort(words.begin(), words.end(), cmp);

    // 2. 중복 제거
    words.erase(std::unique(words.begin(), words.end()), words.end());

    // 3. 출력
    for (const auto& w : words)
    {
        std::cout << w << '\n';
    }
}