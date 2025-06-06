// mixtypes.cpp -- some types combinations
#include <iostream>

struct antarctica_year_end
{
    int year;
    /*some really interesting data, etc.*/
};

int main()
{
    antarctica_year_end s01, s02, s03;
    s01.year = 1998;
    antarctica_year_end * pa = &s02;
    pa->year = 1999;
    antarctica_year_end trio[3]; //array of 3 structures
    trio[0].year = 2003;
    std::cout << trio->year << std::endl;
    const antarctica_year_end * arp[3] = {&s01, &s02, &s03};
    std::cout << arp[1]->year << std::endl;
    const antarctica_year_end ** ppa = arp;
    auto ppb = arp; // C++11 automatic type deduction
    // or else use antarctica_year_end ** ppb = arp;
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb + 1))->year << std::endl;

    return 0;
}