#include <iostream>
#include <string>

int N, M;

void print(int start, int depth, std::string txt)
{
    if (depth == M)
    {
        std::cout << txt << "\n";
        return;
    }

    for (int i = start; i <= N; i++)
    {
        print(i + 1, depth + 1, txt + std::to_string(i) + " ");
    }
}

int main()
{
    std::cin >> N >> M;
    print(1, 0, "");
}