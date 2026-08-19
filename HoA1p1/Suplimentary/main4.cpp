#include <iostream>
class Triangle {
private:
    double totalAngle, angleA, angleB, angleC; 
public:
    Triangle(double A, double B, double C); 
    void setAngles(double A, double B, double C);
    const bool validateTriangle(); 
};
// Constructor definition to initialize private member variables and calculate total angle
Triangle::Triangle(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A+B+C;
}
// Setter method definition to update angle values and recalculate the overall sum
void Triangle::setAngles(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A+B+C;
}
// Method to determine if overall angle is triangle or not
const bool Triangle::validateTriangle() {
    return (totalAngle <= 180);
}
// Driver code
int main(){
    Triangle set1(40, 30, 110);
    if(set1.validateTriangle()){
    	
    std:: cout << "The shape is a valid triangle.\n";

    } else {
      std:: cout << "The shape is NOT a valid triangle.\n";
    }
    return 0;
}
