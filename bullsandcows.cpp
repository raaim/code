#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int bulls = 0;
    int cows = 0;
    
    vector<int> password = {1,3,2,9};

    vector<int> guess;

    int ans;

    while(cin >> ans){
        guess.push_back(ans);
    }
    int i = 0;
    for(int x : guess){
        if(x == password[i]) ++bulls;
        if(x != password[i] && (x == 1 || x == 3 || x == 2 || x == 9) )
            ++cows;    
        ++i;
    }

    cout << bulls << " bulls and " << cows << " cows\n";
}