#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;

    }
};
int main(){
    Student student1("Spongebob", 14, 2.5);
    Student student2("Patrick", 40, 1.4);
    Student student3("Sandy", 14, 5.9);
    return 0;
}