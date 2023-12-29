// this program  is similar like we study in  today class finding simple interest but there is not used of function 
#include <iostream>
using namespace std;

int main()
{
    // Declare variables in here like c ( double is a float which we use in c program)
    double principal, rate, time, interest;

    // Input values cout is printf and cin is scanf similar like c program
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest (in percentage): ";
    cin >> rate;
    cout << "Enter the time period (in years): ";
    cin >> time;

    // Calculate simple interest this one is formulsa similar like c 
    interest = (principal * rate * time) / 100;
    cout << "The simple interest is: " << interest << endl;
    return 0;
}