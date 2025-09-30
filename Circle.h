#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;
    
public:
    Circle(double r = 0, const std::string& c = "white");
    ~Circle();
    
    double area() const override;
    double perimeter() const override;
    void display() const override;
    
    double getRadius() const;
    void setRadius(double r);
};

#endif
