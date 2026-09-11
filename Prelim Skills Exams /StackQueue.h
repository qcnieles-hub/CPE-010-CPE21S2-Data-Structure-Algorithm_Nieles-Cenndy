#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

#include <iostream>
#include <string>
#include <vector>

// 1. Array-based Stack Implementation
class ArrayStack {
private:
    std::vector<char> arr; // Uses a dynamic array as its internal representation
public:
    void push(char val) {
        arr.push_back(val);
    }
    
    void pop() {
        if (!arr.empty()) {
            arr.pop_back();
        }
    }
    
    char top() const {
        return arr.back();
    }
    
    bool isEmpty() const {
        return arr.empty();
    }
};

// 2. Linked List-based Queue Implementation
class LinkedListQueue {
private:
    struct Node {
        char data;
        Node* next;
        Node(char val) : data(val), next(nullptr) {}
    };
    Node* frontNode;
    Node* rearNode;

public:
    LinkedListQueue() : frontNode(nullptr), rearNode(nullptr) {}
    
    ~LinkedListQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    void enqueue(char val) {
        Node* newNode = new Node(val);
        if (rearNode == nullptr) {
            frontNode = rearNode = newNode;
        } else {
            rearNode->next = newNode;
            rearNode = newNode;
        }
    }

    void dequeue() {
        if (frontNode == nullptr) return;
        Node* temp = frontNode;
        frontNode = frontNode->next;
        if (frontNode == nullptr) {
            rearNode = nullptr;
        }
        delete temp;
    }

    char front() const {
        return frontNode->data;
    }

    bool isEmpty() const {
        return frontNode == nullptr;
    }
};

// Function to check symmetry using both data structures
bool isSymmetric(const std::string& seq) {
    ArrayStack stack;
    LinkedListQueue queue;

    for (char ch : seq) {
        stack.push(ch);
        queue.enqueue(ch);
    }

    while (!stack.isEmpty() && !queue.isEmpty()) {
        if (stack.top() != queue.front()) {
            return false;
        }
        stack.pop();
        queue.dequeue();
    }
    return true;
}

#endif
