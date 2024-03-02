#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string my_to_string(ll n)
{
    string ans = "";
    if (n == 0)
        return "0";
    bool negative = false;
    if (n < 0)
    {
        negative = true;
        n = -n;
    }
    while (n > 0)
    {
        char tmp = '0' + (n % 10);
        ans = tmp + ans;
        n /= 10;
    }
    if (negative)
        ans = "-" + ans;
    return ans;
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    long long n;
    cin >> n;
    cout << my_to_string(n) << endl;
    return 0;
}