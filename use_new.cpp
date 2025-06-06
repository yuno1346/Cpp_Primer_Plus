// use_new.cpp -- using new to allocate memory
#include <iostream>

int main()
{
    using namespace std;

    int nights = 1001;
    int * pt = new int; // allocate memory for an int
    *pt = 1001; // store value in allocated memory

    cout << "nights value = ";
    cout << nights << ": location = " << &nights << endl;
    cout << "int";
    cout << " value = " << *pt << ": location = " << pt << endl;

    double * pd = new double; // allocate memory for a double
    *pd = 10000001.0; // store value in allocated memory

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt: " << sizeof(pt);
    cout << ": size of *pt: " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << ": size of *pd = " << sizeof(*pd) << endl;

    return 0;
}