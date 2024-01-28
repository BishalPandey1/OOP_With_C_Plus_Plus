#include <iostream>
using namespace std;
class Calculator {
    private:
        double number, percentage, degree;
    public:
        void input();
        void output();
        void calculate();
};
void Calculator::input() {
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the percentage: ";
    cin >> percentage;
}
void Calculator::output() {
    cout << "The degree of the number is: " << degree << endl;
}
void Calculator::calculate() {
    degree = number * percentage / 100;
}
int main() {
    Calculator c;
    c.input();
    c.calculate();
    c.output();
    return 0;
}
