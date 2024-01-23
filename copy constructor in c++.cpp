#include <iostream>
using namespace std;

class MyClass {
  public:
    int x;
    MyClass(int a) { x = a; }
    MyClass(const MyClass &obj) { x = obj.x; }

};

int main() {
  MyClass obj1(10);
  MyClass obj2 = obj1;
  cout << "obj1.x: " << obj1.x << endl;
  cout << "obj2.x: " << obj2.x << endl;
  return 0;
}
