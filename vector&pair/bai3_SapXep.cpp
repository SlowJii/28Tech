#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
int n;
cin>>n;
vector<int>vec;
for(int i = 0;  i< n; i++)
{
    int tmp; cin>>tmp;
    vec.push_back(tmp);
}
sort(vec.begin(), vec.end());
for(int x : vec)
{
    cout<<x<<" ";
}
cout<<endl;
sort(vec.begin(), vec.end(), greater<int>());
for(int y : vec)
{
    cout<<y<<" ";
}
return 0;
}