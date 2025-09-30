#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double w, double h, const std::string& c) 
    : Shape(c), width(w), height(h) {}

Rectangle::~Rectangle() {}

double Rectangle::area() const {
    return width * height;
}

double Rectangle::perimeter() const {
    return 2 * (width + height);
}

void Rectangle::display() const {
    std::cout << "Rectangle [width=" << width 
              << ", height=" << height 
              << ", color=" << color 
              << ", area=" << area() 
              << ", perimeter=" << perimeter() << "]" << std::endl;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getHeight() const {
    return height;
}

void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setHeight(double h) {
    height = h;
}
