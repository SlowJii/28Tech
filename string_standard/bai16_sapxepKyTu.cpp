#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// theo thu tu tang dan
void sortString(string &str)
{
    sort(str.begin(),str.end());
    cout<< str;
}
//theo thu tu giam dan
void hehe(string &str)
{
    sort(str.begin(),str.end(), greater<char>());
    cout<<str;
}
// main
int main(int argc, char const *argv[])
{
/*code*/ 
string s;
cin>>s;
sortString(s);
cout<<endl;
hehe(s);
return 0;
}