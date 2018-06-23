#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int i = 0;
    double a = 0;
    double b = 0;

    while (true)
    {
        if ((i % 2) == 0)
            cin >> a;
        else
            cin >> b;

        if (abs (a - b) < 1.0/100)
        {
            cout << "The numbers are almost equal\n";
        }
        
        if (a < b)
        {
            cout << "The smaller value is " << a << endl;
            cout << "The larger value is " << b << endl;
        }
        
        else if (a > b)
        {
            cout << "The smaller value is " << b << endl;
            cout << "The larger value is " << a << endl;
        }
        
        else
        {
            cout << a << " and " << b << " are equal\n";
        }
        
        ++i;
    }

}