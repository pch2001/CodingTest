#include <iostream>
#include <string>

int N, M;
int arr[9];
bool visitid[9];

void print(int start, int depth)
{
    if (depth == M)
    {
        for (int i = 0; i < M; i++)
            std::cout << arr[i] << " ";
        std::cout << "\n";
        return;
    }

    for (int i = start; i <= N; i++)
    {
        for (int i = 0; i < M; i++)
            std::cout << arr[i] << " ";
        std::cout << "\n";

        arr[depth] = i;
        print(i + 1, depth + 1); 
    }
}

int main()
{
	std::cin >> N >> M;

    print(1, 0);

	std::cin.get();
}