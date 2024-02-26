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
for(int i = 0; i < n; i++)
{
    int tmp;
    cin>>tmp;
    vec.push_back(tmp);
}
int l,r;
cin>>l>>r;
for(vector<int>::iterator it = (vec.begin() + l); it != (vec.begin() + r + 1); it++)
{
    cout<<*it<<" ";
}
cout<<endl;
for(vector<int>::iterator it = (vec.begin() + r); it != (vec.begin() + l - 1); it--)
{
    cout<<*it<<" ";
}
return 0;
}