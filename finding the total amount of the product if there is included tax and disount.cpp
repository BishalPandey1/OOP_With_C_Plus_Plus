#include <iostream>
using namespace std;

class Percentage {
    private:
        double amount;
        double percentage;
        double discount;
    public:
        Percentage(double amount, double percentage, double discount) {
            this->amount = amount;
            this->percentage = percentage;
            this->discount = discount;
        }
        double calculatePercentage() {
            return (amount * percentage) / 100;
        }
        double calculateTotalAmount() {
            return amount - discount + calculatePercentage();
        }
};

int main() {
    double amount, percentage, discount;
    cout<<" you are well come here"<<endl;
    cout << "Please enter your total amount : "<<endl;
    cin >> amount;
    cout << "Please enter the percentange of tax is aviable if not enter zero: "<<endl;
    cin >> percentage;
    cout << "Please enter the percentage of discount is aviable if not enter zero: "<<endl;
    cin >> discount;
    Percentage p(amount, percentage, discount);
    cout << "The percentage of " << amount << " is " << p.calculatePercentage() << endl;
    cout << "Dear customer the total amount is  " << p.calculateTotalAmount() << endl;
    return 0;
}
