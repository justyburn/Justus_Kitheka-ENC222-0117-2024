#include <iostream>

class Square {
protected:
    double side;
public:
    Square(double s) : side(s) {}
    virtual ~Square() {}
    double getPeri() { return 4 * side; }
    double getArea() { return side * side; }
};

class Cube : public Square {
public:
    Cube(double s) : Square(s) {}
    ~Cube() {}
    // Overriding area for a 3D surface and adding volume
    double getArea() { return 6 * side * side; }
    double getVolume() { return side * side * side; }
};

int main() {
    Cube monument(5.0);
    std::cout << "Surface Area: " << monument.getArea() << std::endl;
    std::cout << "Volume: " << monument.getVolume() << std::endl;
    return 0;
}