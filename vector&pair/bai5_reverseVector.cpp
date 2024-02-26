#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int n;
    cin >> n;
    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int l, r;
    cin >> l >> r;

    reverse(vec.begin(), vec.end());
    for (auto x : vec)
    {
        cout << x << " ";
    }
    cout << endl;
    reverse(vec.begin() + l, vec.begin() + r + 1);
    for (auto x : vec)
    {
        cout << x << " ";
    }
    return 0;
}