#include <Shape.h>

class Circle : public Shape {
private:
    double radius;
public:
    Circle(string n, string c, int i, double r) : Shape(n, c, i), radius(r) {}

    double calculateArea() override {
        return 3.14 * radius * radius;
    }

    void display() override {
        cout << "Circle -> Name: " << name
             << ", Color: " << color
             << ", ID: " << id
             << ", Radius: " << radius
             << ", Area: " << calculateArea() << endl;
    }
};
