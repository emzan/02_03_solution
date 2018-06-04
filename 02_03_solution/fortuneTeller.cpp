

#include <iostream>
#include <cstdlib>
#include <cstring>



#include <fstream>
#include <ctime>


std::string getRandomReply(std::string [], int);

int main()
{
    std::ifstream inputfile;
    
    inputfile.open("replies.txt", std::ios::in);
    
    char answer[30];
    std::string answers[20];
    int pos = 0;
    
    
    while (!inputfile.eof())
    {
        inputfile.getline(answer, 30);
        answers[pos] = answer;
        pos++;
    }
    
    std::cout<<"Think of a question for the fortune teller, "
    "\npress enter for the answer"<<std::endl;
    std::cin.ignore();
    std::cout<<getRandomReply(answers, 20)<<std::endl;

}
std::string getRandomReply(std::string replies[], int size)
{
    srand(time(0));
    int randomNum = rand()%20;
    return replies[randomNum];
}
