#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string addBigNum(string num1, string num2)
{
    string ans = "";
    while (num1.size() > num2.size())
    {
        num2 = "0" + num2;
    }
    while (num1.size() < num2.size())
    {
        num1 = "0" + num1;
    }
    int nho = 0;
    for (int i = num1.size() - 1; i >= 0; i--)
    {
        /* code */
        int tmp = (num1[i] - '0') + (num2[i] - '0') + nho;
        nho = tmp / 10;
        if (tmp > 9)
            tmp = tmp % 10;
        ans = char(tmp + '0') + ans;
    }
    if (nho > 0)
    {
        ans = char(nho + '0') + ans;
    }
    return ans;
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    
        string a, b;
        cin >> a >> b;
        cout << addBigNum(a, b);
    
    return 0;
}