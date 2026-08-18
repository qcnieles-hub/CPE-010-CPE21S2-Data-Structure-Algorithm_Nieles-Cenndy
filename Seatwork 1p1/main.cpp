#include <iostream>
using namespace std;

int main() {

    int item_1, item_2, item_3;
    int total, payment, change;

    cout << "Enter price of Item 1: ";
    cin >> item_1;

    cout << "Enter price of Item 2: ";
    cin >> item_2;

    cout << "Enter price of Item 3: ";
    cin >> item_3;

    total = item_1 + item_2 + item_3;

    cout << "Total Price: " << total << endl;

    cout << "Enter Payment: ";
    cin >> payment;

    change = payment - total;

    cout << "\n----- Transaction -----" << endl;

    cout << "Item 1: " << item_1 << endl;
    cout << "Item 2: " << item_2 << endl;
    cout << "Item 3: " << item_3 << endl;
    cout << "Total Price: " << total << endl;
    cout << "Payment: " << payment << endl;
    cout << "Change: " << change << endl;

    return 0;
}
