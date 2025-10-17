#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:

    Counter(int v = 0) : value(v) {}

    void display() const {
        cout << "Value: " << value << endl;
    }

    Counter& operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this; 
        value++;              
        return temp;          
    }
};

int main() {
    Counter c1(5);

    cout << "Original value:\n";
    c1.display();

    cout << "\nUsing prefix increment (++c1):\n";
    ++c1;
    c1.display();

    cout << "\nUsing postfix increment (c1++):\n";
    c1++;
    c1.display();

    return 0;
}
