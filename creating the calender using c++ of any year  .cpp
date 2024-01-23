#include <iostream>

using namespace std;

class Calendar {
    public:
        void draw(int month, int year) {
            cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;
            int daysInMonth = getDaysInMonth(month, year);
            int firstDayOfMonth = getFirstDayOfMonth(month, year);
            int dayOfWeek = 0;
            for (int i = 0; i < firstDayOfMonth; i++) {
                cout << "    ";
                dayOfWeek++;
            }
            for (int i = 1; i <= daysInMonth; i++) {
                if (dayOfWeek == 7) {
                    cout << endl;
                    dayOfWeek = 0;
                }
                printf("%3d ", i);
                dayOfWeek++;
            }
            cout << endl;
        }

    private:
        int getDaysInMonth(int month, int year) {
            int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            if (month == 2 && isLeapYear(year)) {
                return 29;
            }
            return daysInMonth[month - 1];
        }

        bool isLeapYear(int year) {
            if (year % 4 != 0) {
                return false;
            } else if (year % 100 != 0) {
                return true;
            } else if (year % 400 != 0) {
                return false;
            } else {
                return true;
            }
        }

        int getFirstDayOfMonth(int month, int year) {
            int daysSince1900 = 0;
            for (int i = 1900; i < year; i++) {
                if (isLeapYear(i)) {
                    daysSince1900 += 366;
                } else {
                    daysSince1900 += 365;
                }
            }
            for (int i = 1; i < month; i++) {
                daysSince1900 += getDaysInMonth(i, year);
            }
            return (daysSince1900 + 1) % 7;
        }
};

int main() {
    Calendar c;
    int month, year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    c.draw(month, year);
    return 0;
}
