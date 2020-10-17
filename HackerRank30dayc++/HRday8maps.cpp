#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int phoneBookSize;
    string tempName;
    int tempPhoneNumber;
    map<string, int> phoneBook;

    cin >> phoneBookSize;

    for(int i = 0; i < phoneBookSize; i++) {

        cin >> tempName >> tempPhoneNumber;

        phoneBook.insert(pair<string,int>(tempName,tempPhoneNumber));
    }

    while(cin >> tempName) {
        if(phoneBook.find(tempName) != phoneBook.end()) {
            cout << tempName << "=" << phoneBook[tempName] << endl;
        }
        else {
            cout << "Not found" << endl;
        }

    }
    return 0;
}