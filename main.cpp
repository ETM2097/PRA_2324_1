#include <iostream>
#include <vector>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

int main() {
    std::cout << "=== Class Hierarchy Demonstration ===" << std::endl;
    std::cout << std::endl;
    
    // Create individual shapes
    Rectangle rect(5.0, 3.0, "blue");
    Circle circle(4.0, "red");
    
    std::cout << "Individual Shapes:" << std::endl;
    rect.display();
    circle.display();
    std::cout << std::endl;
    
    // Demonstrate polymorphism using base class pointers
    std::cout << "Polymorphism with Base Class Pointers:" << std::endl;
    std::vector<Shape*> shapes;
    shapes.push_back(new Rectangle(10.0, 5.0, "green"));
    shapes.push_back(new Circle(3.0, "yellow"));
    shapes.push_back(new Rectangle(7.0, 7.0, "purple"));
    shapes.push_back(new Circle(2.5, "orange"));
    
    for (size_t i = 0; i < shapes.size(); i++) {
        std::cout << "Shape " << (i + 1) << ": ";
        shapes[i]->display();
    }
    std::cout << std::endl;
    
    // Calculate total area
    double totalArea = 0;
    for (Shape* shape : shapes) {
        totalArea += shape->area();
    }
    std::cout << "Total area of all shapes: " << totalArea << std::endl;
    
    // Clean up
    for (Shape* shape : shapes) {
        delete shape;
    }
    
    return 0;
}
