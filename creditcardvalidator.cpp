#include <iostream>
#include <string>

void luhnAlgorithm(const std::string cardNumber);
int getDigit(const int number);
int sumEvenDigits(const std::string cardNumber);
int sumOddDigits(const std::string cardNumber);

int main()
{
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    luhnAlgorithm(cardNumber);
    return 0;
}

void luhnAlgorithm(const std::string cardNumber)
{
    int result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    if (result % 10 == 0)
    {
        std::cout << "Credit card is valid\n";
    }
    else
    {
        std::cout << "Credit card is invalid\n";
    }
}

int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}

int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}
int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0'));
    }
    return sum;
}
