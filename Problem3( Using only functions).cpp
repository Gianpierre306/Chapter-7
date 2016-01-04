#include <iostream>
using namespace std;
void userInput(string [], int [] , int);
int getTotal( int [], int);
int getHighest( int [], int);
int getLowest(int  [], int );
void display(string [], int [], int);
int main()
{
    
    const int size =5;
    string salsaNames[size] = {" mild "," medium ", " sweet ", " hot ", " zesty "};
    int jars[size];
    
    userInput(salsaNames, jars, size);
    
    display(salsaNames, jars, size);
    
    return 0;
}
void userInput( string names [], int jars [], int size)
{
    for(int count =0; count < size; count++)
    {
        cout << "Enter the number of jars"
             << " " << "for" << names[count] <<  ":";
        cin >> jars[count];
        while(jars[count] < 0)
        {
            cout << "The number you enter is a negative number"
                 << " " <<  "please enter a valid number for"
                 << " " << names[count] << " :";
            cin >> jars[count];
        }
    }
}
int getTotal (int jars [], int size)
{   int total = 0;
    for(int count = 0; count < size; count++)
    {
         total += jars[count];
    }

    return total;
}
int getHighest(int jars [], int size)
{
        int highest = 0;
        
        for (int position = 1; position < size; position++)
        {
            if (jars[position] > jars[highest])
                highest = position;
        }
        return highest;
   
}
int getLowest(int jars [], int size)
{
    int lowest = 0;
    
    for(int position =1; position < size; position++)
    {
        if(jars[position] < jars[lowest])
            lowest = position;
    }
    
    return lowest;
}
void display(string names [], int jars [], int size)
{   int highest;
    int lowest;
    cout << "\nSales Report";
    for(int count = 0; count < size; count++)
    {
        cout << "\nJar salsa:" << names[count]
        << " " << "\t" << "Amount sold:" <<jars[count];
    }
    cout << "\nTotal jar sales: ";
    cout << getTotal( jars, size);
    
    highest = getHighest(jars,size);
    cout << "\nHighest jar sales:" << names[highest];
    lowest = getLowest(jars,size);
    cout << "\nLowest jar sales:" << names[lowest];
}
