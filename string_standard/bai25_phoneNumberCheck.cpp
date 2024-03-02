#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool phoneCheck(string s)
{
    if (s.size() < 10 || s.size() > 11)
    {
        return false;
    }
    for(int i = 0; i < s.size();i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
            break;
        }
    }
    return true;
}
// main
int main(int argc, char const *argv[])
{
/*code*/ 
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    if (phoneCheck(s))      cout<<"YES"<<endl;
    else                    cout<<"NO"<<endl;
}
return 0;
}