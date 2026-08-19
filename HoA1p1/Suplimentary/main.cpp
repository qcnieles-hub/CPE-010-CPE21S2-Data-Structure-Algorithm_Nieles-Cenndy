#include<iostream>
#include <cmath> 
using namespace std;


double convertKelvinToFahrenheit(double kelvin) {           
    return (kelvin - 273.15) * 9/5 + 32;
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(){
    
    double num1, num2, temp;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Before swapping: " << num1 << " and " << num2 << endl;
  
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swapping: " << num1 << " and " << num2 << endl;

  
    double kelvin;
    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;
    cout << "Temperature in Fahrenheit: " << convertKelvinToFahrenheit(kelvin) << endl;

 
    double x1, y1, x2, y2;
    cout << "Enter coordinates of first point (x1 y1): ";   
    cin >> x1 >> y1;
    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Distance between the two points: " << distance(x1, y1, x2, y2) << endl;
    return 0;
}
