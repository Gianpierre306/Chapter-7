#include <iostream>
using namespace std;

int highest(int [], int);
int lowest(int [], int);

int main()
{
    
    const int size = 10;
    int array[size];
    int newHighest;
    int newLowest;
    
    for(int count = 0; count < 10; count++)
    {   
        cout << "Enter for the following"
             <<" "<< "#" << (count + 1)<< ":" << " ";
        cin >> array[count];
    }
    
    newHighest = highest(array, size);
    newLowest = lowest(array, size);
    cout << " \n" << "The highest is: "<< newHighest;
    cout << " \n" << "The lowest is: "<< newLowest;
    
    return 0;
}
int highest(int value [], int size)
{   
    int highest;
    int count;
    highest = value[0];
    
    for(count = 1; count < size; count++)
    {
        if(value[count]>highest)
        {
            highest = value[count];
        }
    }
    
    return highest;
}
int lowest(int value [], int size)
{
    int lowest;
    int count;
    lowest = value[0];
    for(count =1; count < size; count++)
    {
        if(value[count] < lowest)
        {
            lowest = value[count];
        }
    }
    return lowest;
}
