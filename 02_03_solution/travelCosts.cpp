/*

#include <iostream>

double calculateCharges(int, double, double, double);
double calculateCharges(double, double);
int main()
{
    int days;
    double dailyRate, medCharges, labCharges, totalDue;
    bool inpatient = false;
    char answer;
    std::cout << "Is this an impatient stay?" << std::endl;
    std::cin >> answer;
    while (answer != 'y' && answer != 'n')
    {
        std::cout << "Please enter y/n" << std::endl;
        std::cin >> answer;
    }
    if (answer == 'y')
        inpatient = true;
    else
        inpatient = false;
    std::cout << "Enter the total medication charges: " << std::endl;
    std::cin >> medCharges;
    std::cout << "Enter the total lab charges: " << std::endl;
    std::cin >> labCharges;
    
    if (inpatient == true)
    {
        std::cout << "please enter days spent in the hospital: " << std::endl;
        std::cin >> days;
        std::cout << "please enter daily rate: " << std::endl;
        std::cin >> dailyRate;
        totalDue = calculateCharges(days, dailyRate,
                                    medCharges, labCharges);
    }
    else
    {
        totalDue = calculateCharges(medCharges, labCharges);
    }
    std::cout << "The total cost is: $" << totalDue << std::endl;
    std::cin.get();
}
double calculateCharges(int d, double r, double m, double l)
{
    return d * r + m + l;
}
double calculateCharges(double m, double l)
{
    return m + l;
}
*/
