#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
string s;
cin>>s;
int flag = 0;
for(int i = 1; i < s.size(); i++)
{
    if (abs((s[i] - '0') - (s[i-1] - '0')) != 1)
    {
        flag = 1;
        break;
    }
}
if (flag == 0)  cout<<"YES";
else        cout<<"NO";

return 0;
}