#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
string s;
set<string>se;
while(cin>>s)
{
    se.insert(s);
}
if(!se.empty())
{
    cout<<se.size()<<endl;
    cout<<*se.begin()<<" ";
    cout<<*se.rbegin();
}
return 0;
}