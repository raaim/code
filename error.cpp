#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int a = 4;
    int b = 5;
    
    try{
        if(a < b){
            throw 0;
        }
    }
    catch(...){
        cerr << "Oops, first number is smaller than the second" << endl;
    }
}