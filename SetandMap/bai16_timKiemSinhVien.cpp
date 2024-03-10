/*
Ở trường đại học xyz, mỗi sinh viên sẽ có một mã sinh viên riêng. Mã sinh viên là một xâu kí tự không quá 8 kí tự. Bạn được yêu cầu xây dựng chương trình có thể kiểm tra một mã sinh viên nào đó có thuộc về sinh viên nào?
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
    map<string, string> mp;
    while (n--)
    {
        string msv, ten;
        cin >> msv;
        cin.ignore();
        getline(cin, ten);
        mp[msv] = ten;
    }
    int query;
    cin >> query;
    while(query--)
    {
        bool check = true;
        string result;
        string s;   cin>>s;
        for(auto x : mp)
        {
            if (x.first == s)
            {
                result = x.second;
                check = false;
                break;
            }
        }
        if (!check)     cout<<result<<endl;
        else            cout<<"NOT FOUND"<<endl;
    }
    return 0;
}