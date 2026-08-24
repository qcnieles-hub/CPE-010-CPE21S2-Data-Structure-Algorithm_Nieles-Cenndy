#include <iostream>
#include "stackList.h"

int main() {

    std::cout << "--- PUSHING 'c' 'p' 'e' ONTO THE STACK ---- \n";
    //push
    push('c');
    push('p');
    push('e');

    //display the current stacks
    Top<char>();          // Top should be 'e'
    displayAll<char>();
    std::cout << "\n ------ Popping all the elements from the stack -- \n";

    while (!isEmpty<char>()) {
        std::cout << "Popped: " << pop<char>() << std::endl;
    }

    std::cout << "\n ------ Testing the Underflow ---- \n";
    pop<char>();          // FIXED: removed stray "()"

    return 0;
}
