#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int numLines, numQueries;
    vector<string> tags;

    string test;

    cin >> numLines >> numQueries;

    getchar();

    getline(cin, test);

    tags.push_back(test);

    cout << test << endl;

    return 0;
}