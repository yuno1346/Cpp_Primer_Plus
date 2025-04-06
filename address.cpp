// address.cpp -- using the & operator to find the addresses
#include <iostream>

int main()
{
    using namespace std;
    int donut = 6;
    double cups = 4.5;

    cout << "donut value = " << donut;
    cout << ", donut address = " << &donut << endl;
    cout << "cups value = " << cups;
    cout << ", cups address = " << &cups << endl;

    return 0;
}