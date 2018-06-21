#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    char i = 'a';

    while (i<('a'+26))
    {
        cout << i << "\t" << int{i} << "\n";
        ++i;
    }
}