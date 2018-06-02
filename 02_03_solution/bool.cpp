/*
#include <iostream>
#include <cstdlib>
#include <ctime>

int number;
bool guess (int);
int main()
{
    int usernum;
    srand(time(0));
    number = rand() % 50 + 1;
    std::cout << "Guess a number between 1 and 50:" << std::endl;
    std::cin >> usernum;
    while (guess(usernum) != true)
    {
        std::cout << "Try again!" << std::endl;
        std::cin >> usernum;
    }
    std::cout << "You guessed it!" << std::endl;
    std::cin.get();
}
bool guess(int num)
{
    if (num == number)
        return true;
    if (num > number)
        std::cout << "Too high" << std::endl;
    else
        std::cout << "Too low" << std::endl;
    return false;
}
*/
