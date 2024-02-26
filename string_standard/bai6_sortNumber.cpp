#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool zeroCheck(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0')
        {
            return true;
            break;
        }
    }
    return false;
}

void sortAndDeleteZero(string s)
{
    if (!zeroCheck(s))
        cout << "0";
    else
    {
        sort(s.begin(), s.end());
        while (s[0] == '0')
        {
            s.erase(s.begin());
        }
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i];
        }
    }
}

int main(int argc, char const *argv[])
{
    /*code*/
    string s;
    cin >> s;
    sortAndDeleteZero(s);

    return 0;
}