#include <iostream>
using namespace std;
class AreaCalculator {
public:
    double area(double radius) {
        return 3.14159 * radius * radius;
    }
    double area(int side) {
        return side * side;
    }
    double area(double length, double width) {
        return length * width;
    }
    double area(double base, double height, int dummy) {
        return 0.5 * base * height;
    }
};
int main() {
    AreaCalculator calculator;
    double radius, length, width, base, height;
    int side;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << calculator.area(radius) << endl;
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square: " << calculator.area(side) << endl;
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << calculator.area(length, width) << endl;
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << calculator.area(base, height, 0) << endl;
    return 0;
}
