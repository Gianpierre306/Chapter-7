#include <iostream>
using namespace std;
const int rowsOfMonkeys = 3;
const int columnOfDays = 5;
void userData(double [][columnOfDays],int);
double getAverage(double [][columnOfDays], int);
double getHighest(double [][columnOfDays], int);
double getLowest(double [][columnOfDays], int);
int main()
{
 
    double food[rowsOfMonkeys][columnOfDays];
    
    userData(food,rowsOfMonkeys);
    
    cout << "Average amount of food eaten"
              << "per day by the whole familiy of monkeys:"<< " "<< getAverage(food, rowsOfMonkeys);
    cout << "\nThe least amount of food eaten"
              << "during the week by any one monkey:" << " " << getLowest(food, rowsOfMonkeys);
    cout << "\nThe greatest amount of food eaten"
              << "during the week by any one monkey:" << " " << getHighest(food, rowsOfMonkeys);
    return 0;
}
void userData( double food[][columnOfDays], int rowsOfMonkeys)
{
    for(int monkeys = 0; monkeys < rowsOfMonkeys; monkeys++)
    {
        for(int days = 0; days < columnOfDays; days++)
        {
            cout << "\nEnter the amount of food measured in lbs"
                 << " " << "for monkey " << (monkeys +1) << " "
                 << "for day " <<(days+1) <<":";
             cin >> food[monkeys][days];
            while(food[monkeys][days] < 0)
            {
                cout << "You enter a negative number, please re-enter a postive number.";
                cin >> food[monkeys][days];
            }
        }
    }
}
double getAverage(double food[][columnOfDays], int rowsOfMonkeys)
{   double total = 0;
    double average =0;
    for(int days =0; days < columnOfDays; days++)
    {
        for(int monkeys =0; monkeys < rowsOfMonkeys; monkeys++)
        {
            total += food[monkeys][days];
        }

    }
    average = total/columnOfDays;

    return average;
}
double getHighest(double food [][columnOfDays],int rowsOfMonkeys)
{
    double highest;
    highest = food[0][0];
    for(int monkeys = 1; monkeys < rowsOfMonkeys; monkeys++ )
    {
        for(int days = 1; days < columnOfDays; days++)
        {
            if(food[monkeys][days] > highest)
            {
                highest = food[monkeys][days];
            }
        }
    }
    return highest;
}
double getLowest(double food[][columnOfDays], int rowsOfMonkeys)
{
    double lowest;
    lowest = food[0][0];
    for(int monkeys =1; monkeys < rowsOfMonkeys; monkeys++)
    {
        for(int days =1; days < columnOfDays; days++)
        {
            if(food[monkeys][days] < lowest)
            {
                lowest = food[monkeys][days];
            }
        }
    }
    return lowest;
}
