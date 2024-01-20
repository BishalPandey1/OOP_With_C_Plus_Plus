#include <iostream>
#include <string>
using namespace std;

const int MAX_DIGITS = 10;
const int SEGMENTS = 7;
const int DIGITS_HEIGHT = 4;
const int DIGITS_WIDTH = 3;

char digits[DIGITS_HEIGHT][MAX_DIGITS * DIGITS_WIDTH];

const char segments[10][SEGMENTS] = {
    {1, 1, 1, 1, 1, 1, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1}, // 2
    {1, 1, 1, 1, 0, 0, 1}, // 3
    {0, 1, 1, 0, 0, 1, 1}, // 4
    {1, 0, 1, 1, 0, 1, 1}, // 5
    {1, 0, 1, 1, 1, 1, 1}, // 6
    {1, 1, 1, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 1, 1, 1, 0, 1, 1}  // 9
};

void clear_digits_array() {
    for (int i = 0; i < DIGITS_HEIGHT; i++) {
        for (int j = 0; j < MAX_DIGITS * DIGITS_WIDTH; j++) {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position) {
    if (digit < 0 || digit > 9) {
        return;
    }

    int offset = position * DIGITS_WIDTH;

    for (int i = 0; i < SEGMENTS; i++) {
        if (segments[digit][i] == 1) {
            switch (i) {
                case 0:
                    digits[0][offset + 1] = '_';
                    break;
                case 1:
                    digits[1][offset + 2] = '|';
                    break;
                case 2:
                    digits[2][offset + 2] = '|';
                    break;
                case 3:
                    digits[2][offset + 1] = '_';
                    break;
                case 4:
                    digits[2][offset] = '|';
                    break;
                case 5:
                    digits[1][offset] = '|';
                    break;
                case 6:
                    digits[1][offset + 1] = '_';
                    break;
            }
        }
    }
}

void print_digits_array() {
    for (int i = 0; i < DIGITS_HEIGHT; i++) {
        for (int j = 0; j < MAX_DIGITS * DIGITS_WIDTH; j++) {
            cout << digits[i][j];
        }
        cout << endl;
    }
}

int main() {
    clear_digits_array();
   cout << "Enter a number: ";
    string input;
    getline(cin, input);

    int length = input.length();
    int position = 0;

    for (int i = 0; i < length && position < MAX_DIGITS; i++) {
        if (isdigit(input[i])) {
            int digit = input[i] - '0';
            process_digit(digit, position);
            position++;
        }
    }

    print_digits_array();

    return 0;
}
