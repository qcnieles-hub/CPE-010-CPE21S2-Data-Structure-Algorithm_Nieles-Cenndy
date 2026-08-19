#include <iostream>
#include "List.h"

int main() {
    // Create 5 node pointers to hold all the letters
    SinglyList<char>* head = nullptr;
    SinglyList<char>* second = nullptr;
    SinglyList<char>* third = nullptr;
    SinglyList<char>* fourth = nullptr;
    SinglyList<char>* fifth = nullptr;

    // Allocate dynamic memory to all 5 nodes
    head = new SinglyList<char>();
    second = new SinglyList<char>();
    third = new SinglyList<char>();
    fourth = new SinglyList<char>();
    fifth = new SinglyList<char>();

    // Insert your exact corrected data sequence (C E N N D)
    head->data = 'C';
    second->data = 'E';
    third->data = 'N';
    fourth->data = 'N';
    fifth->data = 'D';

    // Assign the next pointers to connect the chain smoothly
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr; // End of the list marker

    std::cout << "\nTesting the ListTraversal Function:\n";
    ListTraversal(head);

    std::cout << "\nTesting the Insert at Head Function:\n";
    s11InsertHead('X', &head);
    ListTraversal(head);

    std::cout << "\nTesting the Insert Any Position Function:\n";
    // Inserts 'Z' right after the node holding 'E' (which is now head->next->next because of 'X')
    s11GeneralInsert('Z', head->next->next); 
    ListTraversal(head);

    std::cout << "\nTesting the Insert at End Function:\n";
    s11InsertEnd('Y', &head);
    ListTraversal(head);

    std::cout << "\nTesting the Delete a Node Function:\n";
    s11DeleteNode('Z', &head);
    ListTraversal(head);
    
    s11DeleteNode('X', &head);
    ListTraversal(head);

    std::cout << "\nDeleting the whole list:\n";
    s11DeleteList(&head);
    ListTraversal(head);

    return 0;
}
