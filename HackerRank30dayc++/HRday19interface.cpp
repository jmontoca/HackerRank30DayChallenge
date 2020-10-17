#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
public:
    //this is the section that was implemented for the hacker rank 
    //challenge
    int divisorSum(int n) {
        int sum = 0;
        int temp = n;

        while(n != 0) {
            if(temp % n == 0) {
                sum +=n;
            }
            n--;
        }
        return sum;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}