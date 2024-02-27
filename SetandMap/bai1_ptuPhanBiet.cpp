#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
int n;
cin>>n;
map<int,bool> mp;
for(int i = 0; i < n; i++)
{
    int x;  cin>>x;
    mp[x] = true;
}
cout<<mp.size();
return 0;
}