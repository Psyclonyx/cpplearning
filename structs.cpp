#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car car);
void paintCar(Car &car, std::string color);

int main(){

    student student1;
    student1.name = "James";
    student1.gpa = 5.2;
    student1.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    printCar(car1);
    paintCar(car1, "black");
    printCar(car1);

    return 0;
}

void printCar(Car car){
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string color){
    car.color = color;
}