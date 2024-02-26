#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void outPut(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}
// main
int main(int argc, char const *argv[])
{
/*code*/
string s;
cin>>s;
string chucai = "";
string so = "";
for(int i = 0; i < s.size(); i++)
{
    if (s[i] <= 57 && s[i] >= 48)
    {
        so = so + s[i];
    }
    else        chucai = chucai + s[i];
} 
outPut(so);
outPut(chucai);
return 0;
}