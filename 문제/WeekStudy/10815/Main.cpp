#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int N, M;

	std::cin >> N ;

	std::vector<int> Ns(N);

	for (int i = 0; i < N; i++)
		std::cin >> Ns[i];

	std::cin >> M;
	std::vector<int> Ms(M);

	for (int i = 0; i < M; i++)
		std::cin >> Ms[i];

	std::sort(Ns.begin(), Ns.end());

	//std::sort(Ms.begin(), Ms.end());
	std::vector<int> answer(M);

	// MS : -10, -5, 2, 3, 4, 5, 9, 10

    for (int i = 0; i < M; i++)
    {
        int l = 0, r = N - 1;
        bool found = false;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (Ns[mid] == Ms[i])
            {
                found = true;
                break;
            }
            else if (Ns[mid] > Ms[i])
                r = mid - 1;
            else
                l = mid + 1;
        }

        std::cout << found << " ";
    }

}