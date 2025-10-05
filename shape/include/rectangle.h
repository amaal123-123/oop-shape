#include <Shape.h>

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(string n, string c, int i, double l, double w)
        : Shape(n, c, i), length(l), width(w) {}

    double calculateArea() override {
        return length * width;
    }

    void display() override {
        cout << "Rectangle -> Name: " << name
             << ", Color: " << color
             << ", ID: " << id
             << ", Length: " << length
             << ", Width: " << width
             << ", Area: " << calculateArea() << endl;
    }
};

