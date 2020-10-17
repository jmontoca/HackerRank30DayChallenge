#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int numSwaps = 0;
    int firstElement;
    int lastElement;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                numSwaps++;
            }
        }
    }

    firstElement = a[0];
    lastElement = a[n - 1];
    cout << "Array is sorted in " << numSwaps << " swaps." << endl;
    cout << "First Element: " << firstElement << endl;
    cout << "Last Element: " << lastElement << endl;
    return 0;
}