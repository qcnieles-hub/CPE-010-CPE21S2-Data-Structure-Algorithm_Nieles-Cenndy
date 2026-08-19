#include <iostream>
using namespace std;

int main() {

    int quiz_1, quiz_2, quiz_3;
    int total;

    cout << "Input score for quiz 1: ";
    cin >> quiz_1;

    cout << "Input score for quiz 2: ";
    cin >> quiz_2;

    cout << "Input score for quiz 3: ";
    cin >> quiz_3;

    total = quiz_1 + quiz_2 + quiz_3;
    double average = total / 3.0;

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    return 0;
}