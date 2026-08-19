#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string studentName;
    int studentAge;

public:
    // Constructor
    Student(string newName = "John Doe", int newAge = 18) {
        studentName = newName;
        studentAge = newAge;
        cout << "Constructor Called." << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor Called." << endl;
    }

    // Copy Constructor
    Student(const Student& copyStudent) {
        cout << "Copy Constructor Called." << endl;
        studentName = copyStudent.studentName;
        studentAge = copyStudent.studentAge;
    }

    // Display Student Details
    void printDetails() {
        cout << studentName << " " << studentAge << endl;
    }
};

int main() {

    const size_t j = 5;

    Student studentList[j] = {};

    string namesList[j] = {"Carly", "Freddy", "Sam", "Zack", "Cody"};
    int ageList[j] = {15, 16, 18, 19, 16};

    for (int i = 0; i < j; i++) {
        Student* ptr = new Student(namesList[i], ageList[i]);
        studentList[i] = *ptr;
        delete ptr;
    }

    cout << "\nStudent List" << endl;

    for (int i = 0; i < j; i++) {
        studentList[i].printDetails();
    }

    return 0;
}