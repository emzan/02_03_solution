
#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
    
    
    
    
    
    
    
    
    std::vector<int> carVins;
    
    
    std::vector<int>num (10);
    
    
    std::vector<double> prices(5,0.0);
    
    int numCars;
    int vin;
    
    std::cout<<"How many cars are in the showroom?\n";
    std::cin>>numCars;
    for(int i=0;i<numCars;i++)
    {
        std::cout<<"Enter the vin for car "<<i+1<<" :";
        std::cin>>vin;
        
        carVins.push_back(vin);
    }
    
    
    std::cout<<"\nVin numbers for cars in showroom:\n";
    for(int i=0;i<carVins.size();i++)
    {
        std::cout<<carVins[i]<<std::endl;
    }
    
    
    int randomNum;
    for(int i=0;i<num.size();i++)
    {
        num[i] = rand();
    }
    
    
    std::cout<<"\n10 random integers: \n";
    for(int i=0; i<num.size();i++)
    {
        std::cout<<num[i]<<std::endl;
    }
    
    
    
    int value = num.at(0);
    
    
    
    
    int value2 = num.capacity();
    
    
    num.pop_back();
    
    
    num.clear();
    
    
    if(num.empty()==true)
        std::cout<<"vector num is empty\n";

}
