#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void lowerString(string &s)
{
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for(int i = 0; i < s.size(); i++)
    {
        cout<<s[i];
    }
    
}
void upperString(string &s)
{
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
    }
    for(int i = 0; i < s.size(); i++)
    {
        cout<<s[i];
    }
    
}
void reverseString(string &s)
{
    for(int i = s.size()-1; i >= 0; i--)
    {
        cout<<s[i];
    }
}
// main
int main(int argc, char const *argv[])
{
/*code*/ 
string s;
cin>>s;
reverseString(s);
cout<<endl;
lowerString(s);
cout<<endl;
upperString(s);
cout<<endl;
return 0;
}