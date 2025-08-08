#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

struct car
{
    std::string model;
    int year;
    std::string color;
};


int main(){

    student student1;
    student1.name = "James";
    student1.gpa = 5.2;
    student1.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    car car1;
    car car2;

    return 0;
}