#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int testNum;

    cin >> testNum; 

    string testCases[testNum];

    for(int i = 0; i < testNum; i++) {
        string temp;

        cin >> temp;

        testCases[i] = temp;
    }

    for(int i = 0; i < testNum; i++) {
        int tSize = testCases[i].length();
        string sEven;
        string sOdd;

        for(int j = 0; j < tSize; j++) {
            (j % 2 == 0) ? sEven.push_back(testCases[i][j]) : sOdd.push_back(testCases[i][j]);
        }

        cout << sEven << " " << sOdd << endl;
    }

    return 0;
}