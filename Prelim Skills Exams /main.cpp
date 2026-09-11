#include <iostream>
#include <vector>
#include <string>
#include "StackQueue.h"

using namespace std;

int main() {
    vector<string> testCases = {"12321", "12345", "1221", "7", "123321", "1234325"};

    for (const string& test : testCases) {
        cout << test << "\n";
        if (isSymmetric(test)) {
            cout << "(Stack LL) SYMMETRIC?: Y\n";
        } else {
            cout << "(Stack LL) SYMMETRIC?: N\n";
        }
        cout << "\n";
    }

    return 0;
}
