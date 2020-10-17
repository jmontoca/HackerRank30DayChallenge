#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    int result = 0;

    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i = 0; i < 10; i++) 
    {
        result = n * (i + 1);

        cout << n << " x " << i + 1 << " = " << result << endl;
    }
    
    return 0;
}
