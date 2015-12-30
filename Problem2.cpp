#include <iostream>
using namespace std;
void userInput(double[], int );
double getTotal(double[], int, double& );
double getAverage(double[],int, double);
double getHighest(double [], int) ;
// i added a reference variable so i could be able to use it in my check function
double getLowest(double[], int, double &);
bool check(double [], int, double);
int main()
{
    int const size = 12;
    double array[size];
    double total;
    double lowest;
    userInput(array, size);

    
    cout << "The total:" << " " << getTotal(array, size, total);
    cout << "\nThe highest:" << " " << getHighest(array,size);
 
    cout << "\nThe lowest:"  << " "<< getLowest(array,size, lowest);
   
    cout << "\nAverage is:" << " " <<getAverage(array, size, total);
    return 0;
}
void userInput(double value[], int size)
{

    for(int count = 0; count < size; count++)
    {
        cout << "Enter the rainfall for month #" << (count +1)<< ":";
        cin >> value[count];
        while(value[count]<0)
        {
            cout << "You enter a negative value"
                 << " "<< "please re-enter a postive value"
                 << " "<< "for month #" << (count +1) << " "<< "again:";
            cin >> value[count];
        }
    }
  
}
double getTotal(double value [], int size, double &total)
{
    for(int count = 0; count < size; count++)
    {
        total += value[count];
    }
    return total;
}

double getHighest (double value [], int size)
{
    int highest;
    highest = value[0];
    for(int count =1; count < size; count++)
    {
        if(value[count] > highest)
        {
            highest = value[count];
        }
       
    }
    return highest;
}
double getLowest (double value [], int size, double &lowest)
{
    lowest = value[0];
    for(int count =1; count < size; count++)
    {
        if(value[count] < lowest)
        {
            lowest = value[count];
        }
     
    }
    return lowest;
}

double getAverage(double value [], int size, double total)
{   double average;
    return average = total /size;
}
// I am trying to check if there's a lowest value or not 
bool check(double value [], int size, double lowest)
{
    bool status;
    
    
}
