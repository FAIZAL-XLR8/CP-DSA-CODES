#include <bits/stdc++.h>
using namespace std;
void permute(string str, int currIdx)
{
    if (currIdx == str.length() - 1)
    {
        cout << str << endl;
        return;
    }
    unordered_set<char> s; // harr ek call pr mera ek set banega that will mark for currIdx which chars are done
    // say for idx = 0, once call is done for first char'a' then it gets marked for that idx = 0, so that again 'a' comes(after b) no calls
    for (int i = currIdx; i < str.length(); ++i)
    {
        // conditions to avoid same calls

        if (s.find(str[i]) != s.end())
            continue;
        // the above line can be written as this too if (s.count(str[i])) // yaa'ni if this str[i] == 1 which is true then continue

        s.insert(str[i]); // if not present then mark it
        swap(str[i], str[currIdx]);
        permute(str, currIdx + 1);
        // backtrack
        swap(str[i], str[currIdx]);
    }
}
int main()
{
    string str = "aba";
    int currIdx = 0;
    permute(str, currIdx);
}