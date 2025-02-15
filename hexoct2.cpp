// hextoc2.cpp

#include <iostream>

int main()
{
    using namespace std;

    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << hex; // manipulator for changing number base
    cout << "waist = " << waist << " (0x42 in hex)" << endl;
    cout << oct; // manipulator for changing number base
    cout << "inseam = " << inseam << " (042 in octal)" << endl;

    return 0;
}