#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){

    // This is a comment
    std::cout << "I like pizza!" << std::endl;
    std::cout << "It's really good!" << "\n";

    // Variables
    int x = 5;
    int y = 6;
    int sum = x + y;
    std::cout << sum << '\n';
    std::string name = "James";
    std::cout << "Hello " << name << '\n';

    // const
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << '\n';

    std::cout << first::x;
    std::cout << second::x;

    text_t firstname = "Bro";
    number_t age = 22;
    std::cout << firstname << '\n';
    std::cout << age << '\n';
    return 0;
}