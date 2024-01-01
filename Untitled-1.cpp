#include<iostream>
using namespace std;

class book
{
private:
    int id;
    char name[100];
public:
    void set_p();
    void display_p();
};

void book::set_p()
{
    cout << "Enter the book id: ";
    cin >> id;
    cout << "Enter the book name: ";
    cin >> name;
}

void book:: display_p()
{
    cout << endl << "Book id: " << id << "\nBook name: " << name;
}

class student: private book
{
    char course[50];
    int fee;
public: 
    void set_s();
    void display_s();
};

void student::set_s()
{
    set_p();
    cout << "Enter the course name: ";
    cin >> course;
    cout << "Enter the course fee: ";
    cin >> fee;
}

void student::display_s()
{
    display_p();
    cout << "\nCourse name: " << course << "\nCourse fee: " << fee << endl;
}

int main()
{
    student s;
    s.set_s();
    s.display_s();
    return 0;
}
