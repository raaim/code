#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> fibNUM = {1};

    cout << "Please enter the amount of Fibonacci numbers which should be printed.\n";

    int amount;
    cin >> amount;

    int x = 1;

    for(int i = 1; i < amount; ++i){
        fibNUM.push_back(x);
        x = (fibNUM[i] + fibNUM[i-1]);
    }
    for(int x : fibNUM){
        cout << x << endl;
    }
}