#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:

    int getTemperature(){
        return temperature;
    }
    int setTemperature(int temperature){
        if (temperature < 0){
            this->temperature = temperature;
        } else if (temperature >= 10){
            this->temperature = 10;
        } else {
            this->temperature = temperature;
        }
    }
};
int main(){
    Stove stove;

    // stove.temperature = 1000000;
    std::cout << "The temperature is set to: " << stove.getTemperature();
}