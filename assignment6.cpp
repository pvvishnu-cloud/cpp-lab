#include <iostream>
#include <string>
using namespace std;
class TelephoneBill {
private:
    string name;
    string address;
    string telephoneNo;
    int numberOfCalls;
public:
    TelephoneBill(string n, string addr, string tel, int calls) {
        name = n;
        address = addr;
        telephoneNo = tel;
        numberOfCalls = calls;
    }
    friend void calculateBill(TelephoneBill &tb);
};
void calculateBill(TelephoneBill &tb) {
    const int chargePerCall = 2;
    int amount = tb.numberOfCalls * chargePerCall;
    cout << "\n----- Telephone Bill -----" << endl;
    cout << "Name: " << tb.name << endl;
    cout << "Address: " << tb.address << endl;
    cout << "Telephone No.: " << tb.telephoneNo << endl;
    cout << "Number of Calls: " << tb.numberOfCalls << endl;
    cout << "Amount to be paid: Rs. " << amount << endl;
}
int main() {
    string name, address, telephoneNo;
    int numberOfCalls;
    cout << "Enter Name: ";
    cin>> name;
    cout << "Enter Address: ";
    cin>> address;
    cout << "Enter Telephone Number: ";
    cin>> telephoneNo;
    cout << "Enter Number of Calls: ";
    cin >> numberOfCalls;
    TelephoneBill tb(name, address, telephoneNo, numberOfCalls);
    calculateBill(tb);
    return 0;
}
