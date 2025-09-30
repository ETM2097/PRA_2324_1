#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double width;
    double height;
    
public:
    Rectangle(double w = 0, double h = 0, const std::string& c = "white");
    ~Rectangle();
    
    double area() const override;
    double perimeter() const override;
    void display() const override;
    
    double getWidth() const;
    double getHeight() const;
    void setWidth(double w);
    void setHeight(double h);
};

#endif
