#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
int n;
cin>>n;
char a[n];
set<char>se;
for(int i = 0; i < n; i++)
{
    cin>>a[i];
    se.insert(a[i]);
}
cout<<se.size()<<endl;
for(auto x : se)
{
    cout<<x<<" ";
}
cout<<endl;
for(auto it = se.rbegin(); it != se.rend(); it++)
{
    cout<<*it<<" ";
}
cout<<endl;
return 0;
}