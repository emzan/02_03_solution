
#include "House.h"
#include <iostream>
//using namespace std;
House::House()
{
    houseColor = "blue";
    numBathrooms = 2;
    numBedrooms = 3;
    squareFeet = 1200;
}
House::House(std::string color, int numBath, int numBed, double sqft)
{
    houseColor = color;
    numBathrooms = numBath;
    numBedrooms = numBed;
    squareFeet = sqft;
}
House::~House()
{
}
std::string House::getColor()
{
    return houseColor;
}
int House::getNumBath()
{
    return numBathrooms;
}
int House::getNumBed()
{
    return numBedrooms;
}
double House::getSqft()
{
    return squareFeet;
}
void House::setColor(std::string c)
{
    houseColor = c;
}
void House::setNumBath(int bath)
{
    numBathrooms = bath;
}
void House::setNumBed(int bed)
{
    numBedrooms = bed;
}
void House::setSqft(double sqft)
{
    squareFeet = sqft;
}

