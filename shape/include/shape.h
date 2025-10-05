#ifndef SHAPE_H

 #define SHAPE_H
#include <iostream>

#include <string>
#include <Shape.h>
using namespace std;

     class Shape {
    protected:
    string name;
    string color;
    int id;
public:
    Shape(string n, string c, int i) : name(n), color(c), id(i) {}

    virtual ~Shape() {}

    virtual double calculateArea() = 0;

    virtual void display() {
        cout << "Shape: " << name
             << ", Color: " << color
             << ", ID: " << id << endl;
    }
};
#endif
