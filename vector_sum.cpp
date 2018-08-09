#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> numVec;

    cout << "Please enter any number that you want to sum, terminating with a |\n";

    int ins = 0;

    for(;cin >> ins;){
        numVec.push_back(ins);
    }

    double sum = 0;

    for(int x : numVec){
        sum += x;
    }

    cout << "The sum is " << sum << " and the average is " << (sum/numVec.size()) << endl;
}