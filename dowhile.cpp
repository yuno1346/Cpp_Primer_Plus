// dowhile.cpp -- exit-condition loop
#include <iostream>

int main()
{
    using namespace std;
    int n;

    cout << "Enter number in the range 1-10 to find ";
    cout << "My favorite number\n";
    do
    {
        cin >> n; // excute body
    } while (n != 7); // then test
    cout << "Yes, 7 is my favorite number\n";
    
    return 0;
}