#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    for (char i = 'a'; i < ('a' + 26); ++i)
    {
        cout << i << "\t" << int{i} << "\n";
    }
}