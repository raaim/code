#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int fsquare(int s)
{
    int a = 0;
    for (int i = 0; i < s; ++i)
        a += s;
    return a;
}

int main()
{
    for (int i = 0; i <= 100; ++i)
        cout << i << "\t" << fsquare(i) << endl;
}