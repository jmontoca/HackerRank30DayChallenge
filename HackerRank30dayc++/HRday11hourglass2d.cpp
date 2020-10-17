#include <bits/stdc++.h>

using namespace std;



int main()
{
    int sum = 0;
    int maxSum = -9999;
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    //get the sum from by adding together indicies that create
    //an hourglass shape. Test this sum against the current maximum
    //sum
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2]
                  + arr[i+1][j+1] + arr[i+2][j] + 
                  arr[i+2][j+1] + arr[i+2][j+2];

            if(maxSum < sum) {
                maxSum = sum;
            }
        }
    }

    cout << maxSum <<endl;

    return 0;
}