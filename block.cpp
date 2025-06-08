// block.cpp -- use a block statement
#include <iostream>

int main()
{
    using namespace std;

    cout << "The Amazing Accounto will sum and average ";
    cout << "five numbers for you.\n";
    cout << "Please enter five values:\n";
    double number;
    double sum = 0.0;

    for (int i = 0; i <= 5; i++)
    {   // block starts here
        cout << "Value "<< i << ": ";
        cin >> number;
        sum += number;
    }   // block ends here

    cout << "Five exquisite choices indeed! ";
    cout << "The sum to " << sum << ".\n";
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Accounto bids you adieu!\n";
    
    return 0;
}