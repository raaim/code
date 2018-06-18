#include <iostream>

int main()
{
    std::cout << "Please enter two floating-point values:\n";
    double var1;
    double var2;
    std::cin >> var1 >> var2;
    if (var1 > var2)
        std::cout << var1 << " is larger than " << var2 << "\n";
    if (var1 < var2)
        std::cout << var1 << " is smaller than " << var2 << "\n";
    if (var1 == var2)
        std::cout << var1 << " is equal to " << var2 << "\n";
    return 0;
}