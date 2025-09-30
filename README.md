# PRA_2324_1
Practice 1 of the subject Advanced Programming

## Class Hierarchy Demonstration

This project demonstrates object-oriented programming concepts including:
- **Inheritance**: Creating a class hierarchy with a base class and derived classes
- **Polymorphism**: Using base class pointers to reference derived class objects
- **Virtual Functions**: Implementing abstract methods that must be overridden
- **Encapsulation**: Using public, protected, and private access modifiers

## Class Structure

```
Shape (Abstract Base Class)
├── Rectangle
└── Circle
```

### Shape (Base Class)
- Abstract class with pure virtual functions `area()` and `perimeter()`
- Protected member: `color`
- Virtual destructor for proper polymorphic deletion

### Rectangle (Derived Class)
- Inherits from Shape
- Additional members: `width`, `height`
- Implements `area()` and `perimeter()` calculations

### Circle (Derived Class)
- Inherits from Shape
- Additional member: `radius`
- Implements `area()` and `perimeter()` calculations

## Building the Project

### Prerequisites
- g++ compiler with C++11 support
- make

### Build Instructions

```bash
# Build the project
make

# Run the program
make run

# Or run directly
./shapes

# Clean build artifacts
make clean
```

## Example Output

The program creates various shapes and demonstrates:
1. Creating individual shape objects
2. Using polymorphism with base class pointers
3. Calculating total area of multiple shapes

## Learning Objectives

This practice helps understand:
- How to design a class hierarchy
- The use of virtual functions and pure virtual functions
- Polymorphic behavior through base class pointers
- Memory management with dynamic allocation 
