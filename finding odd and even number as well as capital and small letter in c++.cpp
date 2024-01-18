#include <iostream>
#include <string>
using namespace std;

class StringAnalyzer {
    private:
        string input_string;
    public:
        StringAnalyzer(string input) {
            input_string = input;
        }
        void analyze() {
            int real_count = 0, odd_count = 0, capital_count = 0, small_count = 0;
            for (int i = 0; i < input_string.length(); i++) {
                if (isdigit(input_string[i])) {
                    real_count++;
                    if (stoi(input_string.substr(i)) % 2 != 0) {
                        odd_count++;
                    }
                } else if (isalpha(input_string[i])) {
                    if (isupper(input_string[i])) {
                        capital_count++;
                    } else {
                        small_count++;
                    }
                }
            }
            cout << "Real numbers: " << real_count << endl;
            cout << "Odd numbers: " << odd_count << endl;
            cout << "Capital letters: " << capital_count << endl;
            cout << "Small letters: " << small_count << endl;
        }
};

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    StringAnalyzer sa(input);
    sa.analyze();
    return 0;
}
