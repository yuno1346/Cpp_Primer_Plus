#include <iostream>

int main()
{
    using namespace std;
    int n;
    const int ratio = 10;
    cout << "Enter a length(cm): ";
    cin >> n;
    cout << "Length in meters: " << n / ratio << endl;
    
    return 0;
}