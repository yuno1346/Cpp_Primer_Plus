// ifelseif.cpp -- if else if else
#include <iostream>

const int Fave = 27;

int main()
{
    using namespace std;
    int n;

    cout << "Enter a number in the range 1 - 100 to find";
    cout << "my favorite number:";

    do
    {
        cin >> n;
        if (n < Fave)
            cout << "too low -- guess again";
        else if (n > Fave)
            cout << "too high -- guess again";
        else
            cout << Fave << "is right!\n";

        
    }while (n != Fave);

    return 0;
}