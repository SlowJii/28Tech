#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    string s;
    set<string> se;
    vector<string> vec;
    while (cin >> s)
    {
        if (se.count(s) == 0)
        {
            se.insert(s);
            vec.push_back(s);
        }
    }
    for (string x : se)
    {
        cout << x << " ";
    }
    cout << endl;
    for (string y : vec)
    {
        cout << y << " ";
    }
    return 0;
}