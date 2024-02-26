#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string addCommas(string s)
{
    if (s.size() <= 3)
        return s;
    int count = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        count++;
        if (count % 3 == 0 && i != 0)
        {
            s.insert(i, ",");
        }
    }
    return s;
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    string s;
    cin >> s;
    cout << addCommas(s);

    return 0;
}