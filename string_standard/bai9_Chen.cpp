#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
string s;
cin>>s;
int k;
cin>>k;
string tmp = "28tech";
s.insert(k, tmp);
for(auto x : s)
{
    cout<<x;
}
return 0;
}