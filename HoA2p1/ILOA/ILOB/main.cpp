#include <iostream>
#include <string>

// Fruit Class
class Fruit {
private:
    std::string name;
    double price;
    int quantity;

public:
    Fruit(std::string n = "", double p = 0, int q = 0) 
        : name(n), price(p), quantity(q) {}

    ~Fruit() {
        std::cout << "Fruit Destructor Called for " << name << std::endl;
    }

    Fruit(const Fruit& other) 
        : name(other.name), price(other.price), quantity(other.quantity) {}

    Fruit& operator=(const Fruit& other) {
        if (this != &other) {
            name = other.name;
            price = other.price;
            quantity = other.quantity;
        }
        return *this;
    }

    double calculateSum() const {
        return price * quantity;
    }

    void display() const {
        if (name.empty()) return; 
        
        std::cout << "Fruit: " << name;
        std::cout << " | Price: " << price;
        std::cout << " | Quantity: " << quantity;
        std::cout << " | Total: " << calculateSum() << std::endl;
    }
};

// Vegetable Class
class Vegetable {
private:
    std::string name;
    double price;
    int quantity;

public:
    Vegetable(std::string n = "", double p = 0, int q = 0) 
        : name(n), price(p), quantity(q) {}

    ~Vegetable() {
        std::cout << "Vegetable Destructor Called for " << name << std::endl;
    }

    Vegetable(const Vegetable& other) 
        : name(other.name), price(other.price), quantity(other.quantity) {}

    Vegetable& operator=(const Vegetable& other) {
        if (this != &other) {
            name = other.name;
            price = other.price;
            quantity = other.quantity;
        }
        return *this;
    }

    double calculateSum() const {
        return price * quantity;
    }

    void display() const {
        if (name.empty()) return;

        std::cout << "Vegetable: " << name;
        std::cout << " | Price: " << price;
         std::cout << " | Quantity: " << quantity;
         std::cout << " | Total: " << calculateSum() << std::endl;
    }
};

// TotalSum Function
double TotalSum(const Fruit fruits[], int fruitSize,
                const Vegetable vegetables[], int vegetableSize) {
    double total = 0;
    for (int i = 0; i < fruitSize; i++) {
        total += fruits[i].calculateSum();
    }
    for (int i = 0; i < vegetableSize; i++) {
        total += vegetables[i].calculateSum();
    }
    return total;
}

int main() {
   
    Fruit fruits[3] = {
        Fruit("Apple", 20, 3),
        Fruit("Banana", 10, 5),
        Fruit("Orange", 15, 4)
    };

    Vegetable vegetables[3] = {
        Vegetable("Carrot", 12, 2),
        Vegetable("Lettuce", 25, 1),
        Vegetable("Tomato", 18, 3)
    };

    std::cout << "====JENNA'S GROCERY LIST ====" << std::endl;

    std::cout << "\nFRUITS" << std::endl;
    for (int i = 0; i < 3; i++) {
        fruits[i].display();
    }

    std::cout << "\nVEGETABLES" << std::endl;
    for (int i = 0; i < 3; i++) {
        vegetables[i].display();
    }

    std::cout << "\nTOTAL AMOUNT TO PAY: "
              << TotalSum(fruits, 3, vegetables, 3)
              << std::endl;

    // Clearing Lettuce
    std::cout << "\nClearing Lettuce from list..." << std::endl;
    vegetables[1] = Vegetable("[Cleared]", 0, 0); 

    std::cout << "\nUPDATED VEGETABLE LIST" << std::endl;
    for (int i = 0; i < 3; i++) {
        vegetables[i].display();
    }

    std::cout << "\nNEW TOTAL AMOUNT TO PAY: "
              << TotalSum(fruits, 3, vegetables, 3)
              << std::endl;

    return 0;
}
