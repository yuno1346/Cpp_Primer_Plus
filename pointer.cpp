// pointer.cpp -- using pointers
#include <iostream>

int main()
{
    using namespace std;
    int updates = 6; // create an int variable
    int *p_updates; // create pointer
    p_updates = &updates; // assign address of updates to pointer

    // express values two ways
    cout << "Value: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    // express address two ways
    cout << "Address: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    // use pointer to change updates
    *p_updates = *p_updates + 1; // add 1 to updates
    cout << "Now updates = " << updates << endl;

    return 0;
}