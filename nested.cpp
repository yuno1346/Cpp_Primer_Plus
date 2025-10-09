// nested.cpp -- nested loops and 2-D array
#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
    using namespace std;
    const char * cities[Cities] =   // array of pointers
    {                               // to 5 strings
        "Gribble City",
        "Gribble Town",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };

    int maxtemps[Years][Cities] =   // 2-D array 
    {
        {35, 32, 33, 36, 35},       // values for maxtemps[0]
        {33, 32, 34, 35, 31},       // values for maxtemps[1]
        {33, 34, 32, 35, 34},       // values for maxtemps[2]
        {36, 35, 34, 37, 35}        // values for maxtemps[3]
    };

    cout << "Maximun temperatures for 2008 - 2011\n\n";
    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }

    return 0;
}