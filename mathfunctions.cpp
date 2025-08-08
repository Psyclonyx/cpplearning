#include <iostream>
#include <cmath>

int main(){
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(x, y);
    z = sqrt(x);
    z = abs(-1*x);
    z = round(3.5);
    z = ceil(3.5);
    z = floor(3.5);

    double a;
    double b;
    double c;

    std::cout << "Enter side A:";
    std::cin >> a;

    std::cout << "Enter side B:";
    std::cin >> b;

    std::cout << "Side C: " << sqrt(pow(a,2)+pow(b,2));
    
}