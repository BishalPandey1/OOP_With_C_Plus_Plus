#include <iostream>
using namespace std;

class SimpleInterest {
    private:
        double principal, rate, time, interest;
    public:
        void getValues() {
            cout << "Enter the principal amount: ";
            cin >> principal;
            cout << "Enter the rate of interest: ";
            cin >> rate;
            cout << "Enter the time period (in years): ";
            cin >> time;
        }
        void calculateInterest() {
            interest = (principal * rate * time) / 100;
        }
        void displayInterest() {
            cout << "The simple interest is: Rs" << interest << endl;
            cout << "The total amount is : Rs " << interest + principal <<endl;
        }
};

int main() {
    SimpleInterest si;
    si.getValues();
    si.calculateInterest();
    si.displayInterest();
    return 0;
}
