// arraynew.cpp -- using new to create an array
#include <iostream>

int main()
{
    using namespace std;
    double * p3 = new double[3]; // space for 3 doubles
    p3[0] = 0.2; // treat as array
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] = " << p3[1] << ".\n";
    p3 = p3 + 1; // increment pointer
    cout << "Now p3[0] = " << p3[0] << "and";
    cout << " p3[1] = " << p3[1] << ".\n";
    p3 = p3 - 1; // point back to beginning
    delete [] p3; // free memory

    return 0;
}