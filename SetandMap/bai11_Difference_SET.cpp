/*
Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm những phần tử xuất hiện trong mảng thứ nhất nhưng không xuất hiện trong mảng thứ 2, liệt kê theo thứ tự từ bé đến lớn.
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
set<int> set1;
set<int> set2;
for(int i = 0; i < n ; i++)
{
    int x; cin>>x;
    set1.insert(x);
} 
for(int i = 0; i < m; i++)
{
    int y; cin>>y;
    set2.insert(y);
}
for(auto it : set1)
{
    if (set2.find(it) == set2.end())
    {
        cout<<it<<" ";
    }
}
return 0;
}