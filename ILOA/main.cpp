#include <iostream>
using namespace std;

// Function Prototypes
void displaySum(int num1, int num2);
bool isAGreaterThanB(int A, int B);
bool logicalOperations(bool x, bool y);

int main() {

    int num1, num2;
    int A, B;
    bool x, y;

    // Function 1: Sum of two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    displaySum(num1, num2);

    // Function 2: Compare A and B
    cout << "\nEnter value for A: ";
    cin >> A;
    cout << "Enter value for B: ";
    cin >> B;

    if (isAGreaterThanB(A, B))
        cout << "A is greater than B" << endl;
    else
        cout << "A is not greater than B" << endl;

    // Function 3: Logical Operations
    cout << "\nEnter two Boolean values (0 or 1): ";
    cin >> x >> y;

    if (logicalOperations(x, y))
        cout << "Logical operations executed successfully." << endl;

    return 0;
}

// Function Definitions

void displaySum(int num1, int num2) {
    cout << "Sum = " << num1 + num2 << endl;
}

bool isAGreaterThanB(int A, int B) {
    return A > B;
}

bool logicalOperations(bool x, bool y) {
    cout << "\nLogical AND (x && y): " << (x && y) << endl;
    cout << "Logical OR (x || y): " << (x || y) << endl;
    cout << "Logical NOT (!x): " << (!x) << endl;
    cout << "Logical NOT (!y): " << (!y) << endl;

    return true;
}
