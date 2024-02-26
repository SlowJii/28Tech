#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void removeLeadingZeros(string& ans) {
    while (!ans.empty() && ans[0] == '0') {
        ans.erase(ans.begin());
    }
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    string a, b;
    cin >> a >> b;

    while (a.size() > b.size())
    {
        b = "0" + b;
    }
    while (a.size() < b.size())
    {
        /* code */
        a = "0" + a;
    }
    string ans = 0;
    int nho = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int tmp = (a[i] - '0') + (b[i] - '0') + nho;
        nho = tmp / 10;
        if (tmp > 9)
            tmp = tmp % 10;
        ans = char(tmp + '0') + ans;
    }
    if (nho > 0)
        ans = char(nho + '0') + ans;
    removeLeadingZeros(ans);
    cout<<ans;
    return 0;
}
