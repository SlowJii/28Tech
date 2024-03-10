#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int n, m;
    cin >> n >> m;
    set<int> a;
    set<int> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        b.insert(y);
    }
    vector<int>re;
    for(set<int>::iterator it = a.begin(); it != a.end(); it++)
    {
        if (b.find(*it) == b.end())
        {
            re.push_back(*it);
        }
    }
    sort(re.begin(), re.end());
    for(auto x : re)
    {
        cout<<x<<" ";
    }
    return 0;
}