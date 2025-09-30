#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
protected:
    std::string color;
    
public:
    Shape(const std::string& c = "white");
    virtual ~Shape();
    
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void display() const;
    
    std::string getColor() const;
    void setColor(const std::string& c);
};

#endif
