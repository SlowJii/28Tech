#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
string s;
getline(cin,s);
string word;
stringstream ss(s);
while(ss>>word)
{
    cout<<word<<" ";
} 
return 0;
}