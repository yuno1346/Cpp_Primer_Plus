// if.cpp -- using the if statement
#include <iostream>

int main()
{
    using std::cin; // using declaration
    using std::cout;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == ' ') // quit at end of sentence
            ++spaces;  // check if ch is a space
        ++total;       // done every time
        cin.get(ch);
    }
    cout << spaces << "space, " << total;
    cout << "characters total in sentence\n";
    return 0;
}