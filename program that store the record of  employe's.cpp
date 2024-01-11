#include <iostream>
using namespace std;

class Employee {
    private:
        int id;
        string name;
        string department;
        double salary;

    public:
        void setEmployeeDetails(int id, string name, string department, double salary) {
            this->id = id;
            this->name = name;
            this->department = department;
            this->salary = salary;
        }

        void displayEmployeeDetails() {
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Department: " << department << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main() {
    const int num_employees = 1000;
    Employee employees[num_employees];

    for (int i = 0; i < num_employees; ++i) {
        cout << "Enter details of employee #" << i + 1 << endl;
        cout << "ID: ";
        int id;
        cin >> id;
        cout << "Name: ";
        string name;
        cin >> name;
        cout << "Department: ";
        string department;
        cin >> department;
        cout << "Salary: ";
        double salary;
        cin >> salary;

        employees[i].setEmployeeDetails(id, name, department, salary);
    }

    cout << "The following are the details of the employees:" << endl;
    for (int i = 0; i < num_employees; ++i) {
        cout << "Employee #" << i + 1 << endl;
        employees[i].displayEmployeeDetails();
    }

    return 0;
}
