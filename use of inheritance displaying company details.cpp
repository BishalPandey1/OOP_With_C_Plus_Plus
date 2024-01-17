#include <iostream>
#include <string>
using namespace std;

class Company {
    protected:
        string name;
        int year_founded;
        string industry;
    public:
        Company(string name, int year_founded, string industry) {
            this->name = name;
            this->year_founded = year_founded;
            this->industry = industry;
        }
        void display() {
            cout << "Name: " << name << endl;
            cout << "Year Founded: " << year_founded << endl;
            cout << "Industry: " << industry << endl;
        }
};

class PublicCompany : public Company {
    private:
        string stock_symbol;
    public:
        PublicCompany(string name, int year_founded, string industry, string stock_symbol) : Company(name, year_founded, industry) {
            this->stock_symbol = stock_symbol;
        }
        void display() {
            Company::display();
            cout << "Stock Symbol: " << stock_symbol << endl;
        }
};

class PrivateCompany : public Company {
    private:
        string headquarters_location;
    public:
        PrivateCompany(string name, int year_founded, string industry, string headquarters_location) : Company(name, year_founded, industry) {
            this->headquarters_location = headquarters_location;
        }
        void display() {
            Company::display();
            cout << "Headquarters Location: " << headquarters_location << endl;
        }
};

int main() {
    PublicCompany microsoft("Dark eed Corporation", 1975, "Technology", "MSFT");
    PrivateCompany apple("lixux Inc.", 1976, "Technology", "Cupertino, California");

    cout << "Public Company 1:" << endl;
    microsoft.display();
    cout << endl;

    cout << "Private Company 2:" << endl;
    apple.display();
    cout << endl;

    return 0;
}
