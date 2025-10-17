#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int BookID;
    string BookName;
    float BookPrice;

    
    float total_cost(int n) const {
        return n * BookPrice;
    }

public:
    
    void inputDetails() {
        cout << "Enter Book ID: ";
        cin >> BookID;
        cin.ignore();
        cout << "Enter Book Name: ";
        getline(cin, BookName);
        cout << "Enter Book Price: ";
        cin >> BookPrice;
    }

    void displayDetails() const {
        cout << "Book ID: " << BookID << endl;
        cout << "Book Name: " << BookName << endl;
        cout << "Book Price: " << BookPrice << endl;
    }

    void purchaseBook() const {
        int copies;
        cout << "Enter number of copies to purchase: ";
        cin >> copies;
        float cost = total_cost(copies);
        cout << "Total Cost to be Paid: " << cost << endl;
    }
};

int main() {
    Book book1, book2, book3;

    cout << "--- Enter details for Book 1 ---" << endl;
    book1.inputDetails();
    cout << endl;

    cout << "--- Enter details for Book 2 ---" << endl;
    book2.inputDetails();
    cout << endl;

    cout << "--- Enter details for Book 3 ---" << endl;
    book3.inputDetails();
    cout << endl;

    cout << "--- Book 1 Information ---" << endl;
    book1.displayDetails();
    book1.purchaseBook();
    cout << endl;

    cout << "--- Book 2 Information ---" << endl;
    book2.displayDetails();
    book2.purchaseBook();
    cout << endl;


    cout << "--- Book 3 Information ---" << endl;
    book3.displayDetails();
    book3.purchaseBook();
    cout << endl;

    return 0;
}
