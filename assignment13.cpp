#include <iostream>
using namespace std;
class c_polygon {
protected:
    double width, height;
public:
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }
    virtual double area() const {
        return 0.0; 
    }
};
class c_rectangle : public c_polygon {
public:
    double area() const override {
        return width * height;
    }
};
class c_triangle : public c_polygon {
public:
    double area() const override {
        return 0.5 * width * height;
    }
};
int main() {
    c_polygon* poly;        
    c_rectangle rect;
    c_triangle tri;
    rect.setDimensions(10, 5);
    poly = &rect; 
    cout << "Area of Rectangle: " << poly->area() << endl;
    tri.setDimensions(10, 5);
    poly = &tri;
    cout << "Area of Triangle: " << poly->area() << endl;
    return 0;
}
