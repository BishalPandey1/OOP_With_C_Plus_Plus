#include <iostream>
using namespace std;

class Factorial {
private:
    int num;
    unsigned long long factorial = 1;

public:
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void calculateFactorial() {
        if (num == 0 || num == 1) {
            factorial = 1;
        } else {
            while (num > 1) {
                factorial *= num;
                num--;
            }
        }
    }

    void display() {
        cout << "Factorial: " << factorial << endl;
    }
};

int main() {
    Factorial factorial;
    factorial.input();
    factorial.calculateFactorial();
    factorial.display();
    return 0;
}
