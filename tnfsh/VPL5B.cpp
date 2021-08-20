#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int time{};
    double damage{};
    cin >> time;
    if (time < 0 or time > 10000) 
    {
	cout << "Get out!!" << "\n";
	return 0;
    }
    if (time > 1000) 
    {
        cout << "RIP!!" << "\n";
	return 0;
    }
    if (time <= 120) damage = time * 2.10;
    if (time > 120 and time <= 330) damage = 120 * 2.10 + (time - 120) * 3.02;
    if (time > 330 and time <= 500) damage = 120 * 2.10 + 210 * 3.02 + (time - 330) * 4.39;
    if (time > 500 and time <= 700) damage = 120 * 2.10 + 210 * 3.02 + 170 * 4.39 + (time - 500) * 4.97;
    if (time >= 701) damage = 120 * 2.10 + 210 * 3.02 + 170 * 4.39 + 200 * 4.97 + (time - 700) * 5.63;
    cout << damage << "\n";
    

    return 0;
  
}
