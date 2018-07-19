#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    string disliked = "fuck";
    vector<string> words;

    for (string word; cin >> word; )
        if (word != disliked)
            words.push_back(word);
        else
            words.push_back("BLEEP");

    for (string x : words)
        cout << x << endl;
}