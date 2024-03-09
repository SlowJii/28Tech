/*
Cho 1 bảng số gồm N dòng và mỗi dòng gồm N số, nhiệm vụ của bạn là in ra những giá trị xuất hiện ở mọi dòng. Gợi ý : Dùng map đánh dấu, dòng 1 : đánh dấu các giá trị ở dòng 1 có value = 1, dòng 2 sẽ kiểm tra giá trị nào được đánh dấu ở dòng 1 mới đánh dấu tại dòng 2, tương tự tới dòng n, những số nào được đánh dấu ở cả n dòng sẽ thỏa mãn yêu cầu.
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
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tmp;
            cin >> tmp;
            if (mp[tmp] == i - 1)
            {
                mp[tmp] = i;
            }
        }
    }
    bool check = true;
    for(pair<int,int> it : mp)
    {
        if (it.second == n)
        {
            cout<<it.first<<" ";
            check = false;
        }
    }
    if (check)  cout<<"NOT FOUND";
    return 0;
}