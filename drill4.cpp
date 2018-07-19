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
    double max = 0;
    double min = 0;
    string a_type;
    string b_type;
    constexpr double cm_to_m = 100;
    constexpr double cm_to_in = 2.54;
    constexpr double in_to_ft = 12;

    while (true)
    {
        
        cin >> a;
        cin >> a_type;
        cin >> b;
        cin >> b_type;
        vector<int> num;


        if (a_type == "cm" || b_type == "cm")
        {
            a /= cm_to_m;
            b /= cm_to_m;
        }

        else if (a_type == "in" || b_type == "in")
        {
            a *= cm_to_in;
            a /= cm_to_m;
            b *= cm_to_in;
            b /= cm_to_m;
        }

        else if (a_type == "ft" || b_type == "ft")
        {
            a *= in_to_ft;
            a *= cm_to_in;
            a /= cm_to_m;
            b *= in_to_ft;
            b *= cm_to_in;
            b /= cm_to_m;
        }
        
        num.push_back(a);
        num.push_back(b);


        if (a >= max)
        {
            max = a;
            cout << a << " is the largest number so far.\n";
        }
        if (b >= max)
        {
            max = b;
            cout << b << " is the largest number so far.\n";
        }
        if (a <= min)
        {
            min = a;
            cout << a << " is the smallest number so far.\n";
        }
        if (b <= min)
        {
            min = b;
            cout << b << " is the smallest number so far.\n";
        }

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

        sort(num.begin(), num.end());

        for (int x : num)
            cout << x << endl;
    }

}