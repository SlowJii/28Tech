#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void inputArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}
// main
int main(int argc, char const *argv[])
{
/*code*/ 
int n,m;
cin>>n>>m;
set<int>se;
for(int i = 0; i < n; i++)
{
    int x; cin>>x;
    se.insert(x);
}
for(int i = 0; i < m; i++)
{
    int y; cin>>y;
    se.insert(y);
}
for(auto it = se.rbegin(); it != se.rend(); it++)
{
    cout<<*it<<" ";
}
return 0;
}