/*
Cho số N không âm 64 bit, bạn hãy in ra dạng nhị phân của N, lưu ý bạn cần in đủ 64 bit của N và triển khai code theo mẫu sau :
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<char> convert_number(ll n)
{
    vector<char> res;
    for (int i = 0; i < 64; i++)
    {
        res.push_back((char)(n % 2) + '0');
        n /= 2;
    }
    reverse(res.begin(),res.end());
    return res;
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<char> bin = convert_number(n);
        for(char x : bin){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}