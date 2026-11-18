#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long calculate(long long a, long long b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    return 0;
}


long long solution(string expression) {
    long long answer = 0;
    std::vector<long long> numbers;
    std::vector<char> signs;
    string temp;

    for (int i = 0; i < expression.length(); i++)
    {
        switch (expression[i])
        {
        case '-':
            signs.emplace_back('-');
            numbers.emplace_back(stoi(temp));
            temp = "";
            break;

        case '+':
            signs.emplace_back('+');
            numbers.emplace_back(stoi(temp));
            temp = "";
            break;

        case '*':
            signs.emplace_back('*');
            numbers.emplace_back(stoi(temp));
            temp = "";
            break;

        default:
            temp += expression[i];
            break;
        }
    }
    numbers.emplace_back(stoi(temp));

    std::vector<char> priorty_sings = { '+', '-', '*' };
    std::sort(priorty_sings.begin(), priorty_sings.end());

    std::vector<long long> tempnums;
    std::vector<char> tempsigns;

    do
    {
        tempnums = numbers;
        tempsigns = signs;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < tempsigns.size();)
            {
                if (tempsigns[j] == priorty_sings[i])
                {
                    long long tempreturn = calculate(tempnums[j], tempnums[j + 1], tempsigns[j]);
                    tempnums.erase(tempnums.begin() + j, tempnums.begin() + j + 2);
                    tempnums.insert(tempnums.begin() + j, tempreturn);
                    tempsigns.erase(tempsigns.begin() + j);
                }
                else
                {
                    j++;
                }
            }
        }
        answer = std::max(answer, std::abs(tempnums[0]));
    } while (next_permutation(priorty_sings.begin(), priorty_sings.end()));



    return answer;
}



int main()
{
    std::cout << solution("100-200*300-500+20");
    std::vector<char> priorty_sings = { '+', '-', '*' };

  /*  std::sort(priorty_sings.begin(), priorty_sings.end());

    while (next_permutation(priorty_sings.begin(), priorty_sings.end() ))
    {
        for (auto i : priorty_sings)
        {
            std::cout << i << " ";
        }
        std::cout << "\n";

    }*/

}

