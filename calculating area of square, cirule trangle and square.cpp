#include <iostream>
using namespace std;

class Shape {
   public:
    virtual float area() = 0;
};

class Circle : public Shape {
   private:
    float radius;

   public:
    Circle(float r) {
        radius = r;
    }
    float area() {
        return 3.14159 * radius * radius;
    }
};

class Triangle : public Shape {
   private:
    float base;
    float height;

   public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }
    float area() {
        return 0.5 * base * height;
    }
};

class Square : public Shape {
   private:
    float side;

   public:
    Square(float s) {
        side = s;
    }
    float area() {
        return side * side;
    }
};

class Rectangle : public Shape {
   private:
    float length;
    float width;

   public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    float area() {
        return length * width;
    }
};

int main() {
    float r, b, h, s, l, w;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    Circle circle(r);
    cout << "The area of the circle is " << circle.area() << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> b >> h;
    Triangle triangle(b, h);
    cout << "The area of the triangle is " << triangle.area() << endl;

    cout << "Enter the length of the side of the square: ";
    cin >> s;
    Square square(s);
    cout << "The area of the square is " << square.area() << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> l >> w;
    Rectangle rectangle(l, w);
    cout << "The area of the rectangle is " << rectangle.area() << endl;

    return 0;
}
