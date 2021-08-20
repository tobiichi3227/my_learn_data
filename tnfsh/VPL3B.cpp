#include <iostream>

using namespace std;

int main()
{
    int china_score{}, math_score{}, english_score{};
    while (cin >> china_score >> math_score >> english_score)
    {
        int score = china_score + math_score + english_score;
        if (score > 300 || score < 0) cout << "BS" <<"\n";
        else if (score >= 180) cout << "PASS" << "\n";
        else if (score < 180) cout << "FAIL" << "\n";
    }
    return 0;
}
