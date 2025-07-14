// waiting.cpp -- using clock() in a time-delay loop
#include <iostream>
#include <ctime> // describes clock() function, clock_t type

int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float sec;
    cin >> sec;
    clock_t delay = sec * CLOCKS_PER_SEC; // convert to clock ticks
    cout << "starting\a\n";
    clock_t start = clock();

    while (clock() - start < delay) // wait untin time elapses
        ; // note the semicolon
    cout << "Done\a\n";

    return 0;
}