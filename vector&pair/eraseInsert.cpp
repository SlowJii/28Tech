#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
int m;
cin>>m;
vector<int> vec;
for(int i = 0; i < m; i++)
{
    int element;
    cin>>element;
    vec.push_back(element);
}
int n;
cin>>n;
while(n--)
{
    int act;
    cin>>act;
    int direct, value;
    if (act == 1)
    {
        cin>>direct>>value;
        vec.insert(vec.begin() + direct, value);
    }
    if (act == 2)
    {
        cin>>direct;
        vec.erase(vec.begin() + direct);
    }
}
if (!vec.empty())   
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
}
else    cout<<"EMPTY";
return 0;
}