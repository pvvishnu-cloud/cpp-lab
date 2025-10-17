#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[3][3];

public:
 
    void input() {
        cout << "Enter elements of 3x3 matrix:\n";
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                cin >> mat[i][j];
    }

    void display() const {
        cout << "Matrix:\n";
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j)
                cout << mat[i][j] << "\t";
            cout << endl;
        }
    }

    Matrix operator+(const Matrix& m) const {
        Matrix result;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
        return result;
    }
};

int main() {
    Matrix m1, m2, sum;

    cout << "Enter first matrix:\n";
    m1.input();

    cout << "\nEnter second matrix:\n";
    m2.input();

    sum = m1 + m2; 

    cout << "\nFirst Matrix:\n";
    m1.display();

    cout << "\nSecond Matrix:\n";
    m2.display();

    cout << "\nSum of Matrices:\n";
    sum.display();

    return 0;
}
