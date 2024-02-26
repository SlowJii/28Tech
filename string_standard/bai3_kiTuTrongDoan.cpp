#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
string s;
cin>>s;
int sum = 0;
for(int i = 0; i < s.size(); i++)
{
    if (s[i] - '0' < 10)
    {
        sum += (s[i] - '0');
    }
}
cout<<sum;
return 0;
}