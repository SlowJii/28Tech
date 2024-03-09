/*
Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm những phần tử xuất hiện ở 1 trong 2 mảng nhưng không được xuất hiện ở cả 2 mảng.
Result = (A hop B) - (A giao B)
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// dung SET de luu 2 mang, sau do dung vector luu nhung gia tri nao chua xuat hien trong SET
// main
int main(int argc, char const *argv[])
{
/*code*/ 
int n,m;
cin>>n>>m;
set<int> a;
set<int> b;
for(int i = 0; i < n; i++)
{
    int x;  cin>>x;
    a.insert(x);
}
for(int i = 0; i < m; i++)
{
    int y; cin>>y;
    b.insert(y);
}
vector<int> result;
for(set<int>:: iterator it = a.begin(); it != a.end(); it++)
{
    if (b.find(*it) == b.end())
    {
        result.push_back(*it);
    }
}
for(set<int>::iterator it = b.begin(); it != b.end(); it++)
{
    if (a.find(*it) == a.end())
    {
        result.push_back(*it);
    }
}
sort(result.begin(), result.end());
for(auto x : result)
{
    cout<<x<<" ";
}
return 0;
}