//compstr2.cpp -- comparing strings using arrays
#include <iostream>
#include <string> // string class

int main()
{
    using namespace std;

    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }

    cout << "After the loop ends, word is " << word << endl;

    return 0;
}