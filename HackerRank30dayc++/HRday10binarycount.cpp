#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    vector<int> binNum;
    int streak = 0;
    int maxStreak = 0;
    int previous = 0;
    int current = 0;

    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(n > 0) {
        int remainder = n % 2;
        binNum.push_back(remainder);
        n = n/2;
    }

    reverse(binNum.begin(), binNum.end());

    //check the first position for a one
    (binNum[0] == 1 && binNum[0] == 1 ? streak++ : streak = 0);

    for(int i = 0; i < static_cast<int>(binNum.size()) - 1; i++) {
        current = binNum[i + 1];
        previous = binNum[i];

        if(current == 1 && previous == 1) {
            streak++;
        }
        else if(current == 0 && previous == 0) {
            streak = 0;
        }
        else {
            streak = 1;
        }

        if(maxStreak < streak) {
            maxStreak = streak;
        }
    }

    cout << maxStreak;

    return 0;
}