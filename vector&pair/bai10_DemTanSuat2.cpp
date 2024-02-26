#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
vector<pair<char,int>> vec;
int n;
cin>>n;
for(int i = 0; i < n ;i++)
{
    char x; cin>>x;
    bool check = true;
    for(int j = 0; j < vec.size(); j++)
    {
        if (vec[j].first == x)
        {
            vec[j].second++;
            check = false;
            break;
        }
    }
    if (check == true)
    {
        vec.push_back(make_pair(x,1));
    }
}
cout<<vec.size()<<endl;
for(pair<char,int> it : vec)
{
    cout<<it.first<<" "<<it.second<<endl;
}
return 0;
}