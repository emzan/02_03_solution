/*
#include <iostream>





//using namespace std;

int main()
{
    
    int JohnsAcct = 12345;
    int* acctPtr = &JohnsAcct;
    
    std::cout << "Johns acct number: " << JohnsAcct <<" is at: " << acctPtr<<std::endl;
    std::cout << "acctPtr points at this value: *acctPtr: "<<*acctPtr<<std::endl;
    std::cout << "Remember: the place in memory of the acctPtr is also called '&JohnsAcct': "<<acctPtr<<std::endl;

    //another example
    std::cout<<std::endl<<"Next example,declares num = 95:"<<std::endl;
    int num = 95;
    std::cout<<"Address to find num value: "<<&num<<std::endl;
    std::cout<<"size of num value based on datatype: "<<sizeof(num)<<std::endl;
    std::cout<<"value at this location: "<<num<<std::endl;
    
    std::cout<<std::endl<<"Next example, add numPtr:"<<std::endl;
    //let's add a pointer to hold the address of  num
    int* numPtr = &num;
    
    //let's change the value of num using the pointer
    std::cout<<"add 5 to num using the pointer and not the variable:"<<std::endl;
    *numPtr += 5; // num value is now 100
    std::cout<<"Num is now: "<<num<<std::endl;
    std::cout<<"Num location is still the same: "<<&num<<std::endl;
    std::cout<<"Value of numPtr is: "<<*numPtr<<std::endl;
    
    std::cout<<std::endl<<"Next example, using characters"<<std::endl;
    char letter = 'A';
    std::cout<<"size of letter value using datatype: "<<sizeof(letter)<<std::endl;
    
    std::cout<<"value at this location: "<<letter<<std::endl;
    //let's add a pointer to hold the address of letter
    char* letterPtr = &letter;
    
    // let's change the value of letter using the pointer
    std::cout<<"\nadd 25 to letter:"<<std::endl;
    *letterPtr += 25; //letter value is now Z
    std::cout<<"Letter is now: "<<letter<<std::endl;
  
    std::cin.get();
}
*/
