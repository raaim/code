#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cout << "Please enter 3 numbers for a, b and c such that ax² + bx + c = 0\n";
    cin >> a >> b >> c;

    double root1 = (-b+sqrt((b*b)-4*a*c))/(2*a); //Quadratic formula (-b±√b²-4ac)/(2a)
    double root2 = (-b-sqrt((b*b)-4*a*c))/(2*a);
    if (((b*b) - 4*a*c) < 0)                    //Test if real roots are present. if b²-4ac is less than zero
        cout << "Function has no real roots\n"; //then the function has no real roots.
    else 
        cout << "First root = " << root1 << endl << "Second root = " << root2 << endl;
}