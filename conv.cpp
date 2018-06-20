#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
    constexpr double dollar_to_yen = 110.13;
    constexpr double dollar_to_myr = 4.007;
    constexpr double dollar_to_euro = 0.86;

    cout << "Please enter the value of your currency followed by a letter for currency.\nY for yen, M for myr and E for euro.\nIf you want to convert from dollars to the three currencies then enter D\n";
    double value;
    char currency = 0;

    cin >> value >> currency;

    if (currency == 'Y')
        cout << "That is equivalent to " << value/dollar_to_yen << " dollars\n";
    else if (currency == 'M')
        cout << "That is equivalent to " << value/dollar_to_myr << " dollars\n";
    else if (currency == 'E')
        cout << "That is equivalent to " << value/dollar_to_euro << " dollars\n";
    else if (currency == 'D')
    {
        cout << "That is equicvalent to:\n";
        cout << value*dollar_to_yen << " yen\n";
        cout << value*dollar_to_myr << " ringgit\n";
        cout << value*dollar_to_euro << " euro\n";
    }
    else
        cout << "I don't know that currency";

    return 0;
}