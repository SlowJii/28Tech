/*
Cho danh sách các cầu thủ ghi bàn, bạn hãy thông kê xem mỗi người ghi bao nhiêu bàn và liệt kê danh sách các cầu thủ cùng số lần họ ghi bàn theo thứ tự từ điển tăng dần. Ngoài ra bạn cần tìm người ghi bàn nhiều nhất và ghi bàn ít nhất, nếu có nhiều người có cùng số bàn thắng nhiều nhất và ít nhất bạn cần lấy người có tên theo thứ tự từ điển nhỏ hơn.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int n;
    cin >> n;
    map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    int maxElement = INT_MIN, minElement = INT_MAX;
    string maxPlayer, minPlayer;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > maxElement)
        {
            maxElement = it->second;
            maxPlayer = it->first;
        }
        if (it->second < minElement)
        {
            minElement = it->second;
            minPlayer = it->first;
        }
    }
    cout<<minPlayer<<" "<<minElement<<endl;
    cout<<maxPlayer<<" "<<maxElement;
        
    return 0;
}