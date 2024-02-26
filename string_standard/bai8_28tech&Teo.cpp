#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string eraseRemove(string s)
{
    string res = "28tech";
    for(char c : res)
    {
        s.erase(remove(s.begin(),s.end(), c), s.end());
    }
    return s.empty() ? "EMPTY" : s;
}
// main
int main(int argc, char const *argv[])
{
/*code*/ 
string s;
cin>>s;
cout<<eraseRemove(s);
return 0;
}