/*
#include <iostream>
#include <ctime>
#include <cstdlib>






bool search(int[], int, int);

int main()
{
    srand(time(0));
    int nums[10];
    for(int i=0;i<10;i++)
    {
        nums[i] = rand()%100+1;
    }
    std::cout<<"Array before sort"<<std::endl;
        for(int i=0;i<10;i++)
            std::cout<<nums[i]<<" ";
    std::cout<<std::endl;
    
    
    for(int j = 0; j <10; j++)
    {
        int index = j;
        for(int k = 0; k<10;k++)
        {
            if(nums[index]>nums[k])
            {
                index = k;
            }
        }
        int temp = nums[j];
        nums[j] = nums[index];
        nums[index] = temp;
    }
    std::cout<<"Array after sort"<<std::endl;
    for(int i=0; i<10;i++)
        std::cout<<nums[i]<<" ";
    std::cout<<std::endl;
    
    int value;
    std::cout<<"Enter a number between 1 and 100: "<<std::endl;
    std::cin>>value;
    
    if(search(nums, 10, value)==true)
    {
        std::cout<<"Value "<<value<<" was found\n";
    }
    else
    {
        std::cout<<"Value "<<value<<" was not found\n";
    }
}
bool search(int numbers[], int size, int value)
{
    
    
    bool found = false;
    int low = 0;
    int high = size - 1;
    int pos = 0;
    while (low <= high && !found)
    {
        pos = (low + high)/2;
        if(numbers[pos] == value)
        {
            found = true;
        }
        else if (numbers[pos] < value)
        {
            low = pos + 1;
        }
        else
        {
            found = false;
        }
    }
    return 0;
}
*/
/*noproblem
*/