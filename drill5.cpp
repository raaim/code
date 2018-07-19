#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
try {
    if (true) cout << "Success!\n";
    else cout << "Fail!\n";
    return 0;
}catch (exception& e) {
    cerr << "error: " << e.what() << '\n'; 
    return 1;
}catch (...) {
    cerr << "Oops: unknown exception!\n"; 
    return 2;
}