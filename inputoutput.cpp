#include <iostream>
#include <vector>


int main(){

    std::string name;

    std::cout << "What's your name?: ";
    std::getline(std::cin >> std::ws, name);
    std::cin >> name;

    std::cout << name;
    return 0;
}