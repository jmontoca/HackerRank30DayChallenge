include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
	// Add your code here
    //constructor for class
    Difference(vector<int> elm) {

        for(int i = 0; i < static_cast<int>(elm.size()); i++) {
            this->elements.push_back(elm[i]);
        }
    }

    //computeDifference: 
    //  purpose:
    //      given an array of N elements
    //  parameters: 
    //      none
    //  return:
    //      none
    void computeDifference() {
        maximumDifference = -9999; 
        for(int i = 0; i < static_cast<int>(this->elements.size()) - 1; i++) {
            for(int j = i+1; j < static_cast<int>(this->elements.size()); j++) {
                int absVal = abs(this->elements[i] - this->elements[j]);
                if(maximumDifference < absVal) {
                    maximumDifference = absVal;
                }
            }
        }
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}