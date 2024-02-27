#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
int n,q;
cin>>n;
set<int>se;
for(int i = 0; i < n; i++)
{
    int x;  cin>>x;
    se.insert(x);
}
cin>>q;
while(q--)
{
    int tmp;    cin>>tmp;
    if (se.find(tmp) != se.end()) cout<<"YES"<<endl;
    else        cout<<"NO"<<endl;
}
return 0;
}