
/*
#include <iostream>

void printChange(int&, int&, int&, int&, int&);
void findCoins(int&, int&, int&, int&, int&);
int main()
{
    double price;
    double payment;
    char answer = 'y';
    int dollars, quarters, dimes, nickels, pennies;
    while (answer == 'y')
    {
        std::cout << "Enter price of an item: " << std::endl;
        std::cin >> price;
        std::cout << "Enter payment from customer: " << std::endl;
        std::cin >> payment;
        double change = payment - price;
        dollars = change;
        change = change * 100;
        int coins = change - dollars * 100;
        findCoins(dollars, quarters, dimes, nickels, pennies);
        printChange(dollars, quarters, dimes, nickels, pennies);
        std::cout << "Do you have another transaction?";
        std::cin >> answer;
    }
    std::cout << "Thanks for shopping at TBC!" << std::endl;
    std::cin.get();
}
void printChange(int& dol, int& q, int& d, int& n, int& p)
{
    std::cout << "dollars " << dol << std::endl;
    std::cout << "quarters: " << q << std::endl;
    std::cout << "dimes: " << d << std::endl;
    std::cout << "nickels: " << n << std::endl;
    std::cout << "pennies: " << p << std::endl;
}
void findCoins(int& coins, int& quarters, int& dimes, int& nickels, int& pennies)
{
    quarters = coins / 25;
    dimes = coins % 25 / 10;
    nickels = coins % 25 % 10 / 5;
    pennies = coins % 25 % 10 % 5;
}

*/
