#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s)
{
    if ((s.front() + s.back()) % 2 == 1)
    {
        return false;
    }
    for (int i = 1; i < s.length(); i++)
    {
        if (abs(s[i] - s[i - 1]) == 3)
        {
            return false;
            break;
        }
    }
    if (s.find("28") != string::npos || s.find("82") != string::npos)
    {
        return false;
    }
    return true;
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (check(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}