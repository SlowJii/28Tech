/*
Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm giao của 2 mảng này và in theo thứ tự xuất hiện trong mảng A[].
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
int n,m;
cin>>n>>m;
map<int,int> mp;
int a[100001];
for(int i = 0; i < n; i++)
{
    cin>>a[i];
    mp[a[i]] = 1;
}
for(int i = 0; i < m; i++)
{
    int y;  cin>>y;
    mp[y]++;
}
for(int i = 0; i < n; i++)
{
    if (mp[a[i]] >= 2)
    {
        cout<<a[i]<<" ";
        mp[a[i]] = 0;
    }
}
return 0;
}