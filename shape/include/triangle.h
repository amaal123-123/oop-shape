#include<Shape.h>
class Triangle : public Shape {

private:
    double base, height;
public:
    Triangle(string n, string c, int i, double b, double h)
        : Shape(n, c, i), base(b), height(h) {}

    double calculateArea() override {
        return 0.5 * base * height;
    }

    void display() override {
        cout << "Triangle -> Name: " << name
             << ", Color: " << color
             << ", ID: " << id
             << ", Base: " << base
             << ", Height: " << height
             << ", Area: " << calculateArea() << endl;
    }
};
