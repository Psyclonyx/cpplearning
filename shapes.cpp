#include <iostream>
#include <cmath>

class Shape{
    public:
    const double PI = 3.14159;

    double area;
    double volume;
};

class Cube : public Shape {
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = 6*pow(side, 2);
        this->volume = pow(side, 3);
    }
};

class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * PI * pow(radius,2);
        this->volume = 4/3.0 * PI * pow(radius,3);
    }
};


int main(){

    Cube cube(10);

    std::cout << "Area: " << cube.area << "m\n";
    std::cout << "Volume: " << cube.volume << "m\n";

    Sphere sphere(5);

    std::cout << "Area: " << sphere.area << "m\n";
    std::cout << "Volume: " << sphere.volume << "m\n";

    return 0;
}