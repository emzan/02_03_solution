

#ifndef HOUSE_H_
#define HOUSE_H_
#include <string>
//using namespace std;
class House
{
private:
    std::string houseColor;
    int numBathrooms;
    int numBedrooms;
    double squareFeet;
public:
    House();
    House(std::string, int, int, double);
    ~House();
    std::string getColor();
    int getNumBath();
    int getNumBed();
    double getSqft();
    void setColor(std::string);
    void setNumBath(int);
    void setNumBed(int);
    void setSqft(double);
};
#endif

