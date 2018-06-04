
#include <iostream>
#include "House.h"
#include <string>
//using namespace std;
void printHouse(House);
int main()
{
    House house1;
    House house2("Tan", 3, 2, 2500);
    printHouse(house1);
    printHouse(house2);
    //return 0;
    std::cin.get();
}
void printHouse(House house)
{
    std::cout << "House color: " << house.getColor() << "\nNumber Bathrooms: "
    << house.getNumBath()
    << "\nNumber Bedrooms: "
    << house.getNumBed() << std::endl;
    std::cout << "Total square feet: "
    << house.getSqft() << std::endl;
    std::cout << std::endl << std::endl;
}
