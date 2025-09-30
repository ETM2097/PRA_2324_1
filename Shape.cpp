#include "Shape.h"
#include <iostream>

Shape::Shape(const std::string& c) : color(c) {}

Shape::~Shape() {}

void Shape::display() const {
    std::cout << "Shape [color=" << color << "]" << std::endl;
}

std::string Shape::getColor() const {
    return color;
}

void Shape::setColor(const std::string& c) {
    color = c;
}
