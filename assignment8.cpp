#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
   
    void inputTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }
    void displayTime() {
        cout << hours << " : " << minutes << " : " << seconds << endl;
    }

    friend Time addTime(const Time &t1, const Time &t2);
};

Time addTime(const Time &t1, const Time &t2) {
    Time result;
    int carry = 0;

    result.seconds = t1.seconds + t2.seconds;
    if (result.seconds >= 60) {
        result.seconds -= 60;
        carry = 1;
    } else {
        carry = 0;
    }

    result.minutes = t1.minutes + t2.minutes + carry;
    if (result.minutes >= 60) {
        result.minutes -= 60;
        carry = 1;
    } else {
        carry = 0;
    }

    result.hours = t1.hours + t2.hours + carry;

    return result;
}

int main() {
    Time t1, t2, sum;

    cout << "Enter first time:\n";
    t1.inputTime();

    cout << "Enter second time:\n";
    t2.inputTime();

    cout << "\nFirst Time: ";
    t1.displayTime();

    cout << "Second Time: ";
    t2.displayTime();

    sum = addTime(t1, t2);

    cout << "Sum of Times: ";
    sum.displayTime();

    return 0;
}
