#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getData() {
        cout << "Enter name: ";
        cin>> name;
        cout << "Enter age: ";
        cin >> age;
        
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int roll_number;

public:
    void getStudentData() {
        getData(); 
        cout << "Enter roll number: ";
        cin >> roll_number;
    }

    void showDetails() const {
        display(); 
        cout << "Roll Number: " << roll_number << endl;
    }
};

int main() {
    Student s;

    cout << "--- Enter Student Details ---\n";
    s.getStudentData();

    cout << "\n--- Student Information ---\n";
    s.showDetails();

    return 0;
}
