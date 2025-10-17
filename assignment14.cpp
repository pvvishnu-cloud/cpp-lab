#include <iostream>
using namespace std;
class Student {
protected:
    string name;
    int rollNo;
    string course;
public:
    void getStudentDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
        cin.ignore(); 
        cout << "Enter course: ";
        getline(cin, course);
    }
    void displayStudentDetails() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};
class Test : virtual public Student {
protected:
    float marks[3]; 
public:
    void getMarks() {
        cout << "Enter marks for 3 subjects:\n";
        for (int i = 0; i < 3; ++i) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    void displayMarks() const {
        for (int i = 0; i < 3; ++i)
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
    }
    float getTotalMarks() const {
        return marks[0] + marks[1] + marks[2];
    }
};
class GraceMarks : virtual public Student {
protected:
    float bonusMark;
public:
    void getBonus() {
        cout << "Enter grace marks: ";
        cin >> bonusMark;
    }
    void displayBonus() const {
        cout << "Grace Marks: " << bonusMark << endl;
    }
    float getBonusMark() const {
        return bonusMark;
    }
};
class Result : public Test, public GraceMarks {
private:
    float total;
public:
    void calculateTotal() {
        total = getTotalMarks() + getBonusMark();
    }
    void displayResult() {
        cout << "\n--- Student Result ---\n";
        displayStudentDetails();
        displayMarks();
        displayBonus();
        cout << "Total Marks (including grace): " << total << endl;
    }
};
int main() {
    Result r;
    cout << "--- Enter Student Information ---\n";
    r.getStudentDetails();
    r.getMarks();
    r.getBonus();
    r.calculateTotal();
    r.displayResult();
    return 0;
}
