#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

double ctok(double c)
// converts Celsius to Kelvin
{
    double k = c + 273.15;
    return k;
}

int main()
{
    double c = 0; // declare input variable
    cin >> c;
    if(c > -273.15){                 // retrieve temperature to input variable
        double k = ctok(c);         // convert temperature
        cout << k << '\n' ;          // print out temperature
    }
    else{
        cerr << "Temperature cannot be below absolute zero (-273.15°C)\n";
    }
}
