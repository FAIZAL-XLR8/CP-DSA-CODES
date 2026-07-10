#include <bits/stdc++.h>
using namespace std;

void generateSubstrings(string &s, int start, string current)
{
    if (start == s.size())
        return;

    for (int i = start; i < s.size(); i++)
    {
        current += s[i];                       // choose character
        cout << current << "\n";               // print substring
        generateSubstrings(s, i + 1, current); // explore further
        current.pop_back();                    // backtrack
    }
}

int main()
{
    string s = "abcd";
    generateSubstrings(s, 0, "");
    return 0;
}
