#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
string s;
cin>>s;
map<char,int> mp;
for(auto x : s)
{
    mp[x]++;
}
for(auto x : s)
{
    if (mp[x] > 1)
    {
        cout<<x;
        break;
    }
    else    cout<<"NONE";
}
return 0;
}