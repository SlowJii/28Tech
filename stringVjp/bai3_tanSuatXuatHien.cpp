#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    string s;
    cin >> s;
    map<char, int> mp;
    vector<pair<char, int>> vec;
    // in ra tan suat xuat hien cua tung phan tu theo thu tu trong xau
    for (int i = 0; i < s.length(); i++)
    {
        char tmp = s[i];
        mp[tmp]++;
        bool check = true;
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j].first == tmp)
            {
                vec[j].second++;
                check = false;
                break;
            }
        }
        if (check == true)
            vec.push_back(make_pair(tmp, 1));
    }
    for(auto it : mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    for(auto x : vec)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}