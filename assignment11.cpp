#include <iostream>
using namespace std;
class BankAccount {
protected:
    int acc_number;
    double balance;
public:
    void setAccountDetails(int accNo, double bal) {
        acc_number = accNo;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", Remaining Balance: " << balance << endl;
        }
    }

    void display() const {
        cout << "Account Number: " << acc_number << endl;
        cout << "Balance: " << balance << endl;
    }

    double getBalance() const {
        return balance;
    }

    void updateBalance(double newBalance) {
        balance = newBalance;
    }
};
class SavingsAccount : public BankAccount {
private:
    double rate_of_interest; 

public:
    void setInterestRate(double rate) {
        rate_of_interest = rate;
    }

    void calculateInterest(int years) {
        double interest = (balance * rate_of_interest * years) / 100.0;
        cout << "Interest for " << years << " years at " << rate_of_interest << "%: " << interest << endl;
        balance += interest;
        cout << "Updated Balance after Interest: " << balance << endl;
    }
};
class CurrentAccount : public BankAccount {
private:
    const double minimum_balance = 1000.0;
    const double service_charge = 50.0;

public:
    void checkAndApplyServiceCharge() {
        if (balance < minimum_balance) {
            cout << "Balance below minimum. Applying service charge of " << service_charge << endl;
            balance -= service_charge;
        } else {
            cout << "No service charge. Balance is sufficient." << endl;
        }
    }

    void displayDetails() const {
        display();
        cout << "Minimum Balance Required: " << minimum_balance << endl;
        cout << "Service Charge (if below min): " << service_charge << endl;
    }
};

int main() {
    cout << "===== Savings Account =====\n";
    SavingsAccount sa;
    sa.setAccountDetails(1001, 5000);
    sa.setInterestRate(5.0);
    sa.deposit(1000);
    sa.withdraw(500);
    sa.calculateInterest(2); 
    sa.display();

    cout << "\n===== Current Account =====\n";
    CurrentAccount ca;
    ca.setAccountDetails(2001, 800);
    ca.deposit(200);
    ca.withdraw(100);
    ca.checkAndApplyServiceCharge();
    ca.displayDetails();

    return 0;
}
