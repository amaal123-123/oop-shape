#include<Shape.h>
#include <Circle.h>
#include <Rectangle.h>
#include <Triangle.h>

int main() {
    Shape* s1 = new Circle("Circle1", "Red", 1, 5);
    Shape* s2 = new Rectangle("Rect1", "Blue", 2, 4, 6);
    Shape* s3 = new Triangle("Tri1", "Green", 3, 3, 7);

    s1->display();
    s2->display();
    s3->display();

    delete s1;
    delete s2;
    delete s3;

    return 0;
}
