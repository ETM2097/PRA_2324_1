#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle(double r, const std::string& c) 
    : Shape(c), radius(r) {}

Circle::~Circle() {}

double Circle::area() const {
    return M_PI * radius * radius;
}

double Circle::perimeter() const {
    return 2 * M_PI * radius;
}

void Circle::display() const {
    std::cout << "Circle [radius=" << radius 
              << ", color=" << color 
              << ", area=" << area() 
              << ", perimeter=" << perimeter() << "]" << std::endl;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double r) {
    radius = r;
}
