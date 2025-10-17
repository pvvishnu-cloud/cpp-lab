#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
   
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called." << endl;
    }

    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called." << endl;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    ~Rectangle() {
        cout << "Rectangle object destroyed." << endl;
    }
};

int main() {
    Rectangle rect1;            
    Rectangle rect2(10, 5);     

    cout << "Rectangle 1: ";
    rect1.display();

    cout << "Rectangle 2: ";
    rect2.display();

    return 0;
}
