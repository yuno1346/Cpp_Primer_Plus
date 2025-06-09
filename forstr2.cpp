// forstr2.cpp -- reversing an array
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // physically modify string object
    char temp;
    int i, j;

    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    { // start block
        temp = word[j];
        word[j] = word[i];
        word[i] = temp;
    } // end block

    cout << word << "\nDone\n";

    return 0;
}