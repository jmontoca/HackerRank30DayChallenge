#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    //n: the number of variable length arrays
    //q: the queries
    int n, q;
    int index1, index2;
    //read in input
    cin >> n >> q;
    //create an array of vectors of the size of the number of n
    vector<int> a[n];
    //add the data into the vector array
    for(int i = 0; i < n; i++) {
        //used to keep the resizing number
        int rSize;
        //read in the size of the inner arrays
        cin >> rSize;
        //resize the vector array
        a[i].resize(rSize);
        //iterate through another loop to save the data
        for(int j = 0; j < rSize; j++) {
            //temp: save the input number 
            int temp;
            cin >> temp;
            //push the saved data into the vector
            a[i][j] = temp;
        }
    }
    //read in query data and print out number at the given indexs
    for(int k = 0; k < q; k++) {
        cin >> index1 >> index2;
        cout << a[index1][index2] << endl;
    }
    return 0;
}