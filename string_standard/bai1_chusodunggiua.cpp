#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
string n;
cin>>n;
if (n.size() % 2 == 0)
{
    cout<<"NOT FOUND";
}
else    cout<<n[(n.size()/2)];
return 0;
}