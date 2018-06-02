
#include "Movie.h"
#include <iostream>

Movie::Movie() {
    movieName = "";
    year = 19000;
    rating = "G";
}
Movie::Movie(std::string name, int year, std::string rating)
{
    movieName = name;
    while (year < 1950 || year > 2018)
    {
        std::cout << "Invalid year, please enter between 1950 and present: ";
        std::cin >> year;
        std::cin.ignore();
    }
    this->year = year;
    this->rating = rating;
}
Movie::~Movie() {
}
std::string Movie::getName()
{
    return movieName;
}
void Movie::setName(std::string name)
{
    movieName = name;
}
int Movie::getYear()
{
    return year;
}
void Movie::setYear(int year)
{
    while (year < 1950 || year > 2018)
    {
        std::cout << "Invalid year, please enter between 1950 and present: ";
        std::cin >> year;
        std::cin.ignore();
    }
    this->year = year;
}
std::string Movie::getRating()
{
    return rating;
}
void Movie::setRating(std::string rating)
{
    this->rating = rating;
}

