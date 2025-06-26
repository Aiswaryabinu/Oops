# Object-Oriented Programming (OOP) Concepts in C++

This repository provides comprehensive explanations and C++ code examples for all major Object-Oriented Programming (OOP) concepts. 

---

## Table of Contents

- [Introduction](#introduction)
- [Core OOP Concepts in C++](#core-oop-concepts-in-c)
  - [Class and Object](#class-and-object)
  - [Encapsulation](#encapsulation)
  - [Abstraction](#abstraction)
  - [Inheritance](#inheritance)
  - [Polymorphism](#polymorphism)
    - [Function Overloading](#function-overloading)
    - [Operator Overloading](#operator-overloading)
    - [Function Overriding](#function-overriding)
    - [Virtual Functions](#virtual-functions)
  - [Constructor](#constructor)
  - [Destructor](#destructor)
  - [Exception Handling](#exception-handling)
  - [Access Specifiers](#access-specifiers)
  - [Static Members](#static-members)
  - [Constant Members](#constant-members)
- [How to Use This Repository](#how-to-use-this-repository)
- [Contributing](#contributing)
- [License](#license)

---

## Introduction

**Object-Oriented Programming (OOP)** in C++ organizes code by bundling related properties and behaviors into individual objects. C++ supports all major OOP principles with language features for practical implementation.

---

## Core OOP Concepts in C++

### Class and Object

- **Class:** Blueprint for creating objects.  
- **Object:** Instance of a class.

```cpp
class Car {
public:
    string brand;
    void honk() { cout << "Beep!\n"; }
};
Car myCar;
```

---

### Encapsulation

- Bundling data and related functions into a single unit (class).
- Restricts access using access specifiers.

```cpp
class Student {
private:
    int age;
public:
    void setAge(int a) { age = a; }
    int getAge() { return age; }
};
```

---

### Abstraction

- Hiding complex implementation details, exposing only the essentials.
- Achieved using abstract classes and pure virtual functions.

```cpp
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};
```

---

### Inheritance

- Deriving new classes from existing ones.
- Promotes code reuse.

```cpp
class Animal {
public:
    void eat() { cout << "Eating\n"; }
};
class Dog : public Animal {
public:
    void bark() { cout << "Barking\n"; }
};
```

---

### Polymorphism

The ability of functions or operators to operate in different ways depending on context.

#### Function Overloading

- Multiple functions with the same name but different parameter lists.
- Achieves compile-time (static) polymorphism.

```cpp
class Print {
public:
    void show(int i) { cout << "Integer: " << i << endl; }
    void show(double d) { cout << "Double: " << d << endl; }
};
```

---

#### Operator Overloading

- Redefining operators for user-defined types.
- Achieves compile-time polymorphism.

```cpp
class Complex {
    int real, imag;
public:
    Complex(int r, int i) : real(r), imag(i) {}
    Complex operator + (const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }
};
```

---

#### Function Overriding

- Redefining a base class function in a derived class.
- Achieves run-time (dynamic) polymorphism, especially with virtual functions.

```cpp
class Base {
public:
    virtual void display() { cout << "Base display\n"; }
};
class Derived : public Base {
public:
    void display() override { cout << "Derived display\n"; }
};
```

---

#### Virtual Functions

- Enable run-time polymorphism in C++.
- Declared using the `virtual` keyword in the base class and overridden in the derived class.

```cpp
class Shape {
public:
    virtual void draw() { cout << "Drawing Shape\n"; }
};
class Circle : public Shape {
public:
    void draw() override { cout << "Drawing Circle\n"; }
};
```

---

### Constructor

- Special method called when an object is created.
- Can be overloaded (multiple constructors with different parameters).

```cpp
class Point {
public:
    int x, y;
    Point() { x = 0; y = 0; }
    Point(int a, int b) { x = a; y = b; }
};
```

---

### Destructor

- Special method called when an object is destroyed.
- Used for cleanup.

```cpp
class Demo {
public:
    ~Demo() { cout << "Destructor called\n"; }
};
```

---

### Exception Handling

- Handle runtime errors using `try`, `catch`, and `throw`.

```cpp
try {
    throw 20;
} catch (int e) {
    cout << "Exception: " << e << endl;
}
```

---

### Access Specifiers

- **public:** Accessible from anywhere.
- **private:** Accessible only within the class.
- **protected:** Accessible within the class and derived classes.

---

### Static Members

- Shared among all instances of a class.

```cpp
class Example {
public:
    static int count;
};
int Example::count = 0;
```

---

### Constant Members

- Cannot be changed after initialization.

```cpp
class Test {
public:
    const int value;
    Test(int v) : value(v) {}
};
```

---

## How to Use This Repository

1. **Clone the repository:**
   ```bash
   git clone https://github.com/Aiswaryabinu/Oops.git
   ```
2. **Explore the code:**  
   Each OOP concept is explained with clear C++ code examples.
3. **Run and experiment:**  
   Compile and modify the examples to deepen your understanding.

---

## Contributing

Contributions are welcome! Please open an issue or submit a pull request with improvements, corrections, or new examples.

---

## License

This project is licensed under the [MIT License](LICENSE).

---

Happy Learning C++ OOP!
